module top(
	input clk, output [12:0] seconds,
	input [7:0] sw, input btnl, input btnr,
	
	output [6:0] Led,
	
	output [6:0] seg, output [3:0] an
);
    // two control buttons
    wire btn_reset;
    wire btn_set_pause;
    reg btnRight = 0; // temp
    reg btnCenter = 0; // temp
    debounce db1(clk, btnl, btn_reset);
    debounce db2(clk, btnr, btn_set_pause);
	
    // slider switches
    wire [1:0] sel = sw[1:0]; // selects the digit position to adjust
    wire [3:0] num = sw[6:3]; // represents the binary value to set
    wire       adj = sw[7];   // sets stopwatch to adjust mode

    // pause button
    reg paused_toggle = 0;
    always @(negedge btn_set_pause) begin
        paused_toggle = ~paused_toggle;
    end
    wire paused;
    assign paused = (adj || paused_toggle);

    // adjust registers
    wire [2:0] adj_sel;
    reg [3:0] adj_val = 5;
    assign adj_sel = adj ? sel : 3'd5; // 5+ means void

    counter counter(clk, btn_reset, paused,
                    adj, btn_set_pause, adj_sel, num,
				    Led, seg, an);
endmodule
