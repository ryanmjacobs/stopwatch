module display(seconds, seg, an);
    input [3:0] seconds;
    output reg [6:0] seg;
    output [3:0] an;
    
    reg [3:0] num = 4'b0101;
    reg [3:0] panel = 4'b0000;
    reg [6:0] segment;
   
    assign an = panel;
    always @(num) begin
   	case (num)
   		4'd0: seg = 7'b1000000;
   		4'd1: seg = 7'b1111001;
   		4'd2: seg = 7'b0100100;
   		4'd3: seg = 7'b0110000;
   		4'd4: seg = 7'b0011001;
   		4'd5: seg = 7'b0010010;
   		4'd6: seg = 7'b0000010;
   		4'd7: seg = 7'b1111000;
   		4'd8: seg = 7'b0000000;
   		4'd9: seg = 7'b0010000;
   	endcase
    end
endmodule
