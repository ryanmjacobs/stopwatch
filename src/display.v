// count is measured in seconds
module display(input clk, input [12:0] count);
    // partitioned values
    reg [6:0] sec;
    reg [6:0] min;
    reg [4:0] digits [0:3];

    always @(count) begin
        sec = count % 60;
        min = (count - sec) / 60;

        // calculate the values of the left
        // and right digits for seconds
        digits[3] = sec % 10;
        digits[2] = (sec - digits[3]) / 10;

        // ditto
        digits[1] = min % 10;
        digits[0] = (min - digits[1]) / 10;
    end

    // calculate segment values
    // in this order: min_l, min_r, sec_l, sec_r
    genvar i;
    wire [3:0] segments [0:3];
    for (i = 0; i < 4; i=i+1) begin
        segment segment0(digits[i], segments[i]);
    end

    // render a different panel on each clock tick
    reg [3:0] panel = 0;
    always @(posedge clk) begin
        panel = (panel + 1'b1) % 4;
    end
endmodule

module segment(value, storage);
    input [4:0] value;        // value to display, i.e. digits 0-9
    output reg [3:0] storage; // storage register for the lookup table

    // lookup bit-value for 7-segment digit
    always @(value) begin
        case (value)
            0: storage = 7'b1000000;
            1: storage = 7'b1111001;
            2: storage = 7'b0100100;
            3: storage = 7'b0110000;
            4: storage = 7'b0011001;
            5: storage = 7'b0010010;
            6: storage = 7'b0000010;
            7: storage = 7'b1111000;
            8: storage = 7'b0000000;
            9: storage = 7'b0010000;
        endcase
    end
endmodule
