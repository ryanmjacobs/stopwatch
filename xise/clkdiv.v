`timescale 10ns/10ns
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:54:41 05/09/2018 
// Design Name: 
// Module Name:    counter 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module clkdiv(
    input clk,
	 input rst,
	 output reg [26:0] out1, 	  // 1Hz Clock
	 output reg [25:0] out2, 	  // 2Hz Clock
	 output reg [17:0] out7seg, // 380Hz Clock
	 output reg [25:0] outadj   // 5Hz Clock
    );
	 
	localparam out1div = 100000000;
	localparam out2div = 50000000;
	localparam out7div = 262144;
	localparam outadjdiv = 20000000;
    // sped up timescale for simulation
	//localparam out1div = 10000;
	//localparam out2div = 5000;
	//localparam out7div = 26;
	//localparam outadjdiv = 2000;

	initial begin
		out1 <= 0;
		out2 <= 0;
		out7seg <= 0;
		outadj <= 0;
	end

	always @ (posedge clk) 
		begin
			if (rst) 
				begin
					out1 <= 27'b0;
					out2 <= 26'b0;
					out7seg <= 18'b0;
					outadj <= 26'b0;
				end 
			else if (out1 == out1div - 1)
				begin
					out1 <= 27'b0;
					out2 <= out2 + 1;
					out7seg <= out7seg + 1;
					outadj <= outadj + 1;
				end
			else if (out2 == out2div - 1)
				begin
					out1 <= out1 + 1;
					out2 <= 26'b0;
					out7seg <= out7seg + 1;
					outadj <= outadj + 1;
				end
			else if (out7seg == out7div - 1)
				begin
					out1 <= out1 + 1;
					out2 <= out2 + 1;
					out7seg <= 18'b0;
					outadj <= outadj + 1;
				end
			else if (outadj == outadjdiv - 1)
				begin
					out1 <= out1 + 1;
					out2 <= out2 + 1;
					out7seg <= out7seg + 1;
					outadj <= 26'b0;
				end
			else 
				begin
					out1 <= out1 + 1;
					out2 <= out2 + 1;
					out7seg <= out7seg + 1;
					outadj <= outadj + 1;
				end
		end
endmodule
