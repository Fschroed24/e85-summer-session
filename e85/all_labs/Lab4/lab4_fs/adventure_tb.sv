module testbench();
 logic clk, reset;
 logic N, S, E, W, G0, G1;
 logic [1:0] expected;
 logic [31:0] vectornum, errors;
 logic [5:0] testvectors[10000:0];

lab4_FS dut(clk, reset, N, S, E, W, G0, G1);

always
    begin
        clk=1; #5; clk=0; #5;
    end
initial
    begin
        $readmemb("adventure.tv", testvectors);
        vectornum = 0; errors = 0; reset = 1; #22; reset = 0;
    end 

always @(posedge clk) begin 
    #1; 
    if (^testvectors[vectornum] === 1'bx) begin
        $display("%d tests completed with %d errors", vectornum, errors);
        $finish;
    end

    {N, S, E, W, expected} = testvectors[vectornum];
end

always @(negedge clk) begin
    if (~reset) begin

        if ({G0, G1} !== expected) begin
            $display("Error: inputs = %b", {N, S, E, W});
            $display(" outputs = %b %b (%b expected)", G0, G1, expected);
            errors = errors + 1;
        end

        vectornum = vectornum + 1;

        if (vectornum == 18) begin
            $display("%d tests completed with %d errors", vectornum, errors);
            $finish;
        end
    end
end

endmodule