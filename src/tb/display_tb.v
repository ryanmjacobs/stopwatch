module display_tb;
    reg clk = 0;
    reg [26:0] out1 = 0;
    reg [12:0] count = 119;

    wire [4:0] min_l = 0;
    wire [4:0] min_r = 0;
    wire [4:0] sec_l = 0;
    wire [4:0] sec_r = 0;
    display display(clk, out1, adj, min_l, min_r, sec_l, sec_r);

    initial begin
        $display("--- display tb ---");
        #20 $finish;
    end

    always begin
        #1 clk <= ~clk;
    end
endmodule
