module top(input clk, output [12:0] seconds);
    reg rst = 0;
    wire [26:0] out1;    // 1Hz Clock
    wire [25:0] out2;    // 2Hz Clock
    wire [17:0] out7seg; // 380Hz Clock
    wire [25:0] outadj;  // 5Hz Clock
    clkdiv clkdiv(clk, rst, out1, out2, out7seg, outadj);

    // two control buttons
    wire btn_reset;
    wire btn_set_pause;
    reg btnRight = 0; // temp
    reg btnCenter = 0; // temp
    debounce db1(clk, btnRight,  btn_reset);
    debounce db2(clk, btnCenter, btn_set_pause);
    
    // slider switches
  //reg [1:0] sel = sw[1:0]; // selects the digit position to adjust
  //reg [3:0] num = sw[7:4]; // represents the binary value to set
  //reg       adj = sw[8];   // sets stopwatch to adjust mode
    reg [1:0] sel = 0;
    reg [3:0] num = 0;
    reg       adj = 0;

    // pause button
    assign paused = (!adj && btn_set_pause);

    wire [4:0] min_l = 0;
    wire [4:0] min_r = 0;
    wire [4:0] sec_l = 0;
    wire [4:0] sec_r = 0;
    counter counter(clk, out1, btn_reset, paused, min_l, min_r, sec_l, sec_r);
    display display(clk, min_l, min_r, sec_l, sec_r);
endmodule
