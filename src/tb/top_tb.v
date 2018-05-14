module top_tb;
    reg clk = 0;

    initial begin
        $display("top tb");
        #1000000 $finish;
    end

    always begin
        #1 clk = ~clk;
    end
endmodule
