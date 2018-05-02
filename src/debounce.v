module debounce(clk, src, dst);
    // debounce threshold of 1 ms
    parameter CLK_FREQ_KHZ = 100_000;
    parameter threshold = CLK_FREQ_KHZ;

    input  clk;
    input  src;
    output reg dst;

    reg  [1:0] state;
    reg [23:0] count;

    always @(posedge clk) begin
        // basic FIFO
        state[0] <= src;
        state[1] <= state[0];

        count <= count + 1'b1;

        if (dst == state[1])
            count <= 0;
        else begin
            count <= count+1;

            if (count > threshold) begin
                dst <= ~dst;
                count <= 0;
            end
        end
    end
endmodule
