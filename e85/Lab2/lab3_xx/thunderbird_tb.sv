module testbench();
 logic clk, reset;
 logic left, right, la, lb, lc, ra, rb, rc;
 logic [5:0] expected;
 logic [31:0] vectornum, errors;
 logic [7:0] testvectors[10000:0];
// instantiate device under test
lab3_FS dut(clk, reset, left, right, la, lb, lc, ra, rb, rc);
// generate clock
always
 begin
 clk=1; #5; clk=0; #5;
 end
// at start of test, load vectors and pulse reset
initial
 begin
 $readmemb("thunderbird.tv", testvectors);
 vectornum = 0; errors = 0; reset = 1; #22; reset = 0;
 end
// apply test vectors on rising edge of clk
always @(posedge clk) begin
    #1;

    if (^testvectors[vectornum] === 1'bx) begin
        $display("%d tests completed with %d errors", vectornum, errors);
        $finish;
    end

    {left, right, expected} = testvectors[vectornum];
end
// check results on falling edge of clk
always @(negedge clk) begin
    if (~reset) begin
        if ({la, lb, lc, ra, rb, rc} !== expected) begin
            $display("Error: inputs = %b", {left, right});
            $display(" outputs = %b %b %b %b %b %b (%b expected)",
                la, lb, lc, ra, rb, rc, expected);
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