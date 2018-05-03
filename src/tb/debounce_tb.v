module debounce_tb;
    reg  clk;
    reg  src;
    wire dst;

    debounce db(clk, src, dst);

    initial begin
        clk <= 0;
        src <= 0;

        #5  src <= 1;
        $display("");

        #10 src <= 0;
        $display("");

        #10 $finish;
        $display("");
    end

    always begin
        #1 clk <= ~clk;
        if (clk)
            $display("#%2d: RISE src=%d dst=%d", $time, src, dst);
    end
endmodule
