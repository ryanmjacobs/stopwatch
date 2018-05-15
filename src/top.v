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
    debounce db1(clk, btnl,  btn_reset);
    debounce db2(clk, btnr, btn_set_pause);
	
    // slider switches
    wire [1:0] sel = sw[1:0]; // selects the digit position to adjust
    wire [3:0] num = sw[6:3]; // represents the binary value to set
    wire       adj = sw[7];   // sets stopwatch to adjust mode

    // pause button
    wire paused;
    assign paused = (adj || btn_set_pause);

    // adjust registers
    wire [2:0] adj_sel;
    reg [3:0] adj_val = 5;
    assign adj_sel = adj ? sel : 3'd5; // 5+ means void

	wire rst;
    assign rst = 0;    
    counter counter(clk, rst, paused,
                    adj, adj_sel, num,
				    Led, seg, an);
endmodule
