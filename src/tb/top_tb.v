// 100 MHz scale
`timescale 10ns/10ns

module top_tb;
    reg clk = 0;
    wire [12:0] seconds;
	 wire [7:0] sw;
	 wire btnl, btnr;
	 wire [6:0] seg; 
	 wire [3:0] an;
    top top(clk, seconds, sw, btnl, btnr, seg, an);

    initial begin
        $display("--- top tb ---");
        $dumpfile("top.vcd");
        $dumpvars(0, clk, seconds, seg, an);
    end

    always begin
        #4000 $finish;
    end

    // run testbench for 2 seconds
    always begin
        #5
        if (seconds >= 2)
            $finish;
    end

    always begin
        #1 clk <= ~clk;
    end
endmodule
