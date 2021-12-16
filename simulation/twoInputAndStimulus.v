`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:33:59 12/16/2021
// Design Name:   twoInputAnd
// Module Name:   /home/kid-116/Desktop/DDS-MiniProject/simulation/twoInputAndStimulus.v
// Project Name:  simulation
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: twoInputAnd
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module twoInputAndStimulus;

	// Ideal I/Os
	reg _Z;
	reg _A;
	reg _B;

	// Actutal Inputs
	reg A;
	reg B;

	// Outputs
	wire Z;

	// Instantiate the Unit Under Test (UUT)
	twoInputAnd uut (
		.A(A), 
		.B(B), 
		.Z(Z)
	);
	
	integer fault = 0;
	
	initial begin
	
		// Introducing faults
		// force A = 1; // Sa1 fault at A
		force B = 1; // Sa1 fault at B
		// force Z = 1;
		
		assign _Z = _A * _B;
				
		// Initialize Inputs
		A = 0;
		B = 0;
		_A = 0;
		_B = 0;
		#50;
		check(A, B, Z, _A, _B, _Z);

		// Stimulus
		#100;
		A = 0;
		B = 1;
		_A = 0;
		_B = 1;
		#50;
		check(A, B, Z, _A, _B, _Z);
		
		#100;
		A = 1;
		B = 0;
		_A = 1;
		_B = 0;
		#50;
		check(A, B, Z, _A, _B, _Z);
		
		#100;
		A = 1;
		B = 1;
		_A = 1;
		_B = 1;
		#50;
		check(A, B, Z, _A, _B, _Z);
		
		detectFault(fault);

	end

	function automatic integer check(
		integer A,
		integer B,
		integer Z,
		integer _A,
		integer _B,
		integer _Z
	);
		begin
			$display("");
			$display("Actual I/Os");
			$display("A=%1d, B=%1d, Z=%1d", A, B, Z);
			$display("Ideal I/Os");
			$display("_A=%1d, _B=%1d, _Z=%1d", _A, _B, _Z);
			if (Z != _Z) begin
				$display("Fault detected!");
				if (_A == 0 && _B == 0 && Z == 1) begin
					fault = fault + 1;
				end
				else
				if (_A == 0 && _B == 1 && Z == 1) begin
					fault = fault + 2;
				end
				else
				if (_A == 1 && _B == 0 && Z == 1) begin
					fault = fault + 3;
				end
				else
				if (_A == 1 && _B == 1 && Z == 0) begin
					fault = fault + 4;
				end
			end
		end
	endfunction
	
	function automatic integer detectFault(
		integer f
	);
		begin
			$display("\n");
			// $display("%d", f);
			if (f == 2) begin
				$display("A is having Sa1 fault");
			end
			else
			if (f == 3) begin
				$display("B is having Sa1 fault");
			end
			else
			if (f == 4) begin
				$display("Atleast one of the lines have Sa0 fault and Z can't be Sa1");
			end
			else
			if (f != 0) begin
				$display("Both A and B have Sa1 fault or atleast Z does");
			end
			else begin
				$display("All OK!");
			end
		end
	endfunction
      
endmodule

