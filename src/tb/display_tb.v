module display_tb;
    reg clk = 0;
    reg [12:0] count = 119;

    display display(clk, count);

    initial begin
        $display("--- display tb ---");
        #20 $finish;
    end

    always begin
        #1 clk <= ~clk;
    end
endmodule
