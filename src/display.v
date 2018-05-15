module display(
    input clk,
    input [17:0] out7seg,
    input [25:0] outadj,
    
    input adj, 
	output reg [6:0] seg,
	output reg [3:0] an,
    output reg [6:0] Led,
	 
	input [4:0] min_l,
    input [4:0] min_r,
    input [4:0] sec_l,
    input [4:0] sec_r
);
    initial begin
        Led <= 7'b0000000;
    end
    
    // calculate segment values
    // in this order: min_l, min_r, sec_l, sec_r
    wire [7:0] segments [0:3];
    segment segment0(min_l, segments[0]);
    segment segment1(min_r, segments[1]);
    segment segment2(sec_l, segments[2]);
    segment segment3(sec_r, segments[3]);
    
    // render a different panel on each clock tick
    reg [1:0] panel = 3;
    always @(posedge clk) begin
        if (outadj == 0) begin
            panel = panel - 1'b1;
            an = ~(1 << panel);
            Led = segments[panel];
            seg = segments[panel];
        end
    end
    
/*
    always @(clk) begin
        if (out1 == 0 && adj) begin
            // toggle panel
        end

        if (!adj) begin
            // ensure panel is on
        end
    end*/
endmodule

module segment(value, storage);
    input [4:0] value;        // value to display, i.e. digits 0-9
    output reg [7:0] storage; // storage register for the lookup table

    // lookup bit-value for 7-segment digit
    always @* begin
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
