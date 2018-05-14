module counter_tb;
    reg clk = 0;
    reg rst = 0;
    reg [26:0] out1 = 0;
    reg paused = 0;

    reg [2:0] adj_sel;
    reg [4:0] adj_val;

    wire [4:0] min_l;
    wire [4:0] min_r;
    wire [4:0] sec_l;
    wire [4:0] sec_r;
    counter counter(clk, out1, rst, paused,
                    adj_sel, adj_val,
                    min_l, min_r, sec_l, sec_r);

    initial begin
        $display("--- counter tb ---");
        $monitor("%0d%0d%0d%0d", min_l, min_r, sec_l, sec_r);

        #10 rst = 1;
        #10 rst = 0;

        #200 $finish;
    end

    always begin
        #1 clk <= ~clk;
    end
endmodule
