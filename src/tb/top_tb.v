module top_tb;
    reg clk = 0;
    wire [12:0] seconds;
    top top(clk, seconds);

    initial begin
        $display("--- top tb ---");
        $dumpfile("top.vcd");
        $dumpvars(0, clk);
    end

    // run testbench for 2 seconds
    always begin
        #100
        if (seconds >= 2)
            $finish;
    end

    always begin
        #10 clk = ~clk;
    end
endmodule
