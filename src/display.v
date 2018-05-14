// count is measured in seconds
module display(input clk, input [12:0] count);
    // partitioned values
    reg [6:0] sec;
    reg [6:0] min;
    reg [4:0] sec_l; reg [4:0] sec_r;
    reg [4:0] min_l; reg [4:0] min_r;

    always @(count) begin
        sec = count % 60;
        min = (count - sec) / 60;

        // calculate the values of the left and
        // right digits for seconds and minutes
        sec_r = sec % 10;
        sec_l = (sec - sec_r) / 10;

        // ditto
        min_r = min % 10;
        min_l = (min - min_r) / 10;
    end

    // calculate segment values
    wire [3:0] segments [0:3];
    segment segment0(min_l, segments[0]); // min left
    segment segment1(min_r, segments[1]); // min right
    segment segment2(sec_l, segments[2]); // sec left
    segment segment3(sec_r, segments[3]); // sec right

    // index for which segment to render
    reg [1:0] idx;

    always @(posedge clk) begin
        idx = clk % 4;
    end

  //reg [6:0] seg;
  //output [3:0] an;
endmodule

module segment(value, storage);
    input [4:0] value;        // value to display, i.e. digits 0-9
    output reg [3:0] storage; // storage register for the lookup table

    // lookup bit-value for 7-segment digit
    always @(value) begin
        case (value)
            4'd0: storage = 7'b1000000;
            4'd1: storage = 7'b1111001;
            4'd2: storage = 7'b0100100;
            4'd3: storage = 7'b0110000;
            4'd4: storage = 7'b0011001;
            4'd5: storage = 7'b0010010;
            4'd6: storage = 7'b0000010;
            4'd7: storage = 7'b1111000;
            4'd8: storage = 7'b0000000;
            4'd9: storage = 7'b0010000;
        endcase
    end
endmodule
