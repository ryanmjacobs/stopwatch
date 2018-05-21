module display_tb;
    reg clk = 0;
    wire [26:0] out1;    // 1Hz Clock
    wire [25:0] out2;    // 2Hz Clock
    wire [17:0] out7seg; // 380Hz Clock
    wire [25:0] outadj;  // 5Hz Clock
    clkdiv clkdiv(clk, btn_reset, out1, out2, out7seg, outadj);

    reg adj = 0;
    reg [2:0] adj_sel = 5;

	wire [6:0] seg;
	wire [3:0] an;
    wire [6:0] Led;
	 
	reg [4:0] min_l = 5;
    reg [4:0] min_r = 6;
    reg [4:0] sec_l = 7;
    reg [4:0] sec_r = 8;
    display display(clk, out7seg, outadj,
                    adj_sel, adj, seg, an, Led,
                    min_l, min_r, sec_l, sec_r);

    initial begin
        $display("--- display tb ---");
        $monitor("seg=%b panel=%b", seg, an);
        #1e7 $finish;
    end

    always begin
        #1 clk <= ~clk;
    end
endmodule
