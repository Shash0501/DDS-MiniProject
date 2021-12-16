`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:18:10 12/16/2021
// Design Name:   oneInputNot
// Module Name:   /home/kid-116/Desktop/DDS-MiniProject/simulation/oneInputNotStimulus.v
// Project Name:  simulation
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: oneInputNot
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module oneInputNotStimulus;

	// Ideal I/Os
	reg _Z;
	reg _A;

	// Actual Inputs
	reg A;

	// Outputs
	wire Z;

	// Instantiate the Unit Under Test (UUT)
	oneInputNot uut (
		.A(A), 
		.Z(Z)
	);
	
	integer fault = 0;

	initial begin
	
		// Introducing faults
		force A = 1; // Sa1 fault at A
		// force Z = 1; // Sa1 fault at Z
		// force A = 0; // Sa0 fault at A
		// force Z = 0; // Sa0 fault at Z
		
		assign _Z = ~_A;
				
		// Initialize Inputs
		A = 0;
		_A = 0;
		#50;
		check(A, Z, _A, _Z);

		// Stimulus
		#100;
		A = 1;
		_A = 1;
		#50;
		check(A, Z, _A, _Z);
		
		detectFault(fault);

	end
	
	function automatic integer check(
		integer A,
		integer Z,
		integer _A,
		integer _Z
	);
		begin
			$display("");
			$display("Actual I/Os");
			$display("A=%1d, Z=%1d", A, Z);
			$display("Ideal I/Os");
			$display("_A=%1d, _Z=%1d", _A, _Z);
			if (Z != _Z) begin
				$display("Fault detected!");
				if (_A == 0 && Z == 0) begin
					fault = fault + 1;
				end
				else
				if (_A == 1 && Z == 1) begin
					fault = fault + 2;
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
			if (f == 1) begin
				$display("Z is stuck at 0 and A may also have faults or A is Sa1");
			end
			else
			if (f == 2) begin
				$display("Z is stuck at 1 and A may also have faults or A is Sa0");
			end
			else begin
				$display("All OK!");
			end
		end
	endfunction
      
endmodule

