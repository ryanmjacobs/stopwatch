module display_tb;
    reg clk = 0;
    reg [12:0] count = 119;

    wire [3:0] d0;
    wire [3:0] d1;
    wire [3:0] d2;
    wire [3:0] d3;
    wire [3:0] s0;
    wire [3:0] s1;
    wire [3:0] s2;
    wire [3:0] s3;

    display display(clk, count,
        d0, d1, d2, d3,
        s0, s1, s2, s3);

    initial begin
        $display("--- display tb ---");
        #5 $display(count, d0, d1, d2, d3);
        #5 $display(count, s0, s1, s2, s3);
        #100 $finish;
    end

    always begin
        #1 clk <= ~clk;
    end
endmodule
