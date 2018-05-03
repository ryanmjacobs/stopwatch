module debounce(input clk, input src, output dst);
    // debounce threshold of 1 ms
    parameter CLK_FREQ_KHZ = 100_000;
    parameter threshold = CLK_FREQ_KHZ;

    reg dst;
    reg  [1:0] state;
    reg [23:0] count;

    initial begin
        dst   <= src;
        state <= 0;
        count <= 0;
    end

    always @(posedge clk) begin
        // basic FIFO
        state[0] <= src;
        state[1] <= state[0];

        count <= count+1;

        if (state[0] != state[1])
            count <= 0;
        else begin
            if (count >= threshold) begin
                dst <= state[0];
                count <= 0;
            end
        end
    end
endmodule
