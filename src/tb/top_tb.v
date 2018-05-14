`timescale 1ns/1ps
module top_tb;
    reg clk = 0;
  //top top(clk);

    initial begin
        $dumpfile("top.vcd");
        $dumpvars(0, clk);
    end

    initial begin
        $display("top tb");
        #1000000 $finish;
    end

    always begin
        #1 clk = ~clk;
    end
endmodule
