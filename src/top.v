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
    debounce db1(clk, btnRight,  btn_reset);
    debounce db2(clk, btnCenter, btn_set_pause);
    
    // slider switches
  //reg sel = sw[1:0];
  //reg num = sw[7:4];
  //reg adj = sw[8];
    
    // stopwatch count measured in seconds
    // max. count = "99:99"
    //            = 99 + 99*60
    //            = 6039
    // log2(6039) = ~12.6
    //
    // -> 13 bits required
    reg [20:0] ms = 0;
    reg [12:0] seconds = 0;

    always @(posedge clk) begin
        if (out1 == 0) begin
            seconds = seconds + 1'b1;
            $display(seconds);
        end
    end
    
  //reg seg, an;
  //display display(count, seg, an):
endmodule
