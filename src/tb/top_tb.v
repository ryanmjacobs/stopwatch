// 100 MHz scale
`timescale 10ns/10ns

module top_tb;
    reg clk = 0;
    wire [12:0] seconds;
    top top(clk, seconds);

    initial begin
        $display("--- top tb ---");
        $dumpfile("top.vcd");
        $dumpvars(0, clk, seconds);
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
