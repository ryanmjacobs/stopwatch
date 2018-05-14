module counter(
    input clk,
    input [26:0] out1,
    input rst,
    input paused,

    output reg [4:0] min_l = 0,
    output reg [4:0] min_r = 0,
    output reg [4:0] sec_l = 0,
    output reg [4:0] sec_r = 0
);

    always @(posedge clk) begin
        if (rst) begin
            min_l <= 0;
            min_r <= 0;
            sec_l <= 0;
            sec_r <= 0;
        end else if (out1 == 0 && !paused) begin
            sec_r = sec_r + 1;

            // seconds, ones overflow
            if (sec_r == 10) begin
                sec_r = 0;
                sec_l = sec_l + 1;
            end

            // seconds, tens overflow
            if (sec_l == 6) begin
                sec_l = 0;
                sec_r = 0;
                min_r = min_r + 1;
            end

            // minutes, ones overflow
            if (min_r == 10) begin
                min_r = 0;
                min_l = min_l + 1;
            end

            // TODO: maybe implement tens overflow for minutes?
            //       spec doesn't define behavior
        end
    end

endmodule
