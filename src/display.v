module display(seconds, seg, an);
    input [3:0] seconds;
	 output reg [6:0] seg;
	 output [3:0] an;
	 
	 reg [3:0] num = 4'b0101;
	 reg [3:0] panel = 4'b1000;
	 reg [6:0] segment;
	
	 assign an = panel;
	 always @(num) begin
		case (num)
			4'd0: seg = 7'b1111110;
			4'd1: seg = 7'b0110000;
			4'd2: seg = 7'b1101101;
			4'd3: seg = 7'b1111001;
			4'd4: seg = 7'b0110011;
			4'd5: seg = 7'b1011011;
			4'd6: seg = 7'b1011111;
			4'd7: seg = 7'b1110000;
			4'd8: seg = 7'b1111111;
			4'd9: seg = 7'b1111011;
		endcase
	 end
endmodule
