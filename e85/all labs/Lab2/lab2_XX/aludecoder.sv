// ALU Decoder  (E85 Lab 2, Part 3)
// =================================================================
// TODO(student): implement the ALU Decoder from Table 7.3.
//
//   Inputs:  ALUOp[1:0], funct3[2:0], op5, funct75
//   Output:  ALUControl[2:0]
//
// Steps (from the lab):
//   1. Write Boolean equations for the three ALUControl bits.
//   2. Sketch the schematic.
//   3. Implement it here in STRUCTURAL Verilog (gate primitives
//      like the full adder, or assign statements per your equations).
//
// You only need to handle the meaningful rows of the truth table
// (see aludecoder.tv); other input combinations are don't cares.
//
// As shipped this is a STUB that drives ALUControl = 000 for every
// input, so `make lab2-aludecoder-sim` will report errors until you
// replace the body below with your real decoder.
// =================================================================
module aludecoder(input  logic [1:0] ALUOp,
                  input  logic [2:0] funct3,
                  input  logic       op5,
                  input  logic       funct75,
                  output logic [2:0] ALUControl);

   // ---- STUB: replace with your implementation ----
   // assign ALUControl = 3'b000;


   // this is declaring the 4 helper signals that will be used in the modules, defined in always_comb block? 
   logic T1;
   logic R; 
   logic Z; 
   logic S; 
   // i dont know conventional used variables so i picked random ones 

   always_comb begin
      // defined helper signals based on my schematic and boolean equations, these are used to make the ALUControl bits
      T1 = (~ALUOp[1] & ALUOp[0]);
      R = (ALUOp[1] & ~ALUOp[0]);
      Z = ~(funct3[2] | funct3[1] | funct3[0]);
      S = (funct3[1] & ~funct3[0]); 

      // now that i have made these helper signals, i wanna make my outputs for ALUControl[2:0] 
      ALUControl[0] = (T1) | 
      (R & Z & (op5 & funct75)) | 
      (R & S);
      // the above definition defines the LSB for our output ALUControl based on my boolean equations and optimizations in my schematic 
      ALUControl[1] = (R & funct3[2] & funct3[1]); 
      // this one is for ALUControl[1] and apparently Systemverilog decides if it makes a 3 input AND gate or 2 different 2 input AND gates
      ALUControl[2] = (R & S & ~funct3[2]); 
      // this is for the MSB of ALUControl, same idea as above... 
      


   end

endmodule
