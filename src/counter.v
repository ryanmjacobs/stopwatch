module counter(
    input clk,
    input rst,
    input paused,

    input adj,
    input btn_set_pause,
    input [2:0] adj_sel,
    input [3:0] adj_val,
	 
	output [6:0] Led,
	 
	output [6:0] seg,
	output [3:0] an
);
    wire [26:0] out1;    // 1Hz Clock
    wire [25:0] out2;    // 2Hz Clock
    wire [17:0] out7seg; // 380Hz Clock
    wire [25:0] outadj;  // 5Hz Clock
    clkdiv clkdiv(clk, btn_reset, out1, out2, out7seg, outadj);

	reg [4:0] min_l = 0;
    reg [4:0] min_r = 0;
    reg [4:0] sec_l = 0;
    reg [4:0] sec_r = 0;

	display display(clk, out7seg, outadj,
                    adj, seg, an, Led,
                    min_l, min_r, sec_l, sec_r);
     
    always @(posedge clk) begin
	    // reset
        if (rst) begin
            min_l = 0;
            min_r = 0;
            sec_l = 0;
            sec_r = 0;
	    end else if (btn_set_pause && adj_sel != 5) begin
		    // adjust
            if (adj_val <= 9) begin
		      case (adj_sel)
                3: min_l = adj_val;
                2: min_r = adj_val;
                1: sec_l = adj_val;
                0: sec_r = adj_val;
              endcase
            end
        end else if (out1 == 0 && !paused) begin
            sec_r = sec_r + 1;

            // seconds, ones overflow
            if (sec_r >= 10) begin
                sec_r = 0;
                sec_l = sec_l + 1;
            end

            // seconds, tens overflow
            if (sec_l >= 6) begin
                sec_l = 0;
                sec_r = 0;
                min_r = min_r + 1;
            end

            // minutes, ones overflow
            if (min_r >= 10) begin
                min_r = 0;
                min_l = min_l + 1;
            end

            // TODO: maybe implement tens overflow for minutes?
            //       spec doesn't define behavior
        end
    end
endmodule
