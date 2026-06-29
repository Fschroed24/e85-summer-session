module lab3_FS( input logic clk,
                    input logic reset,
                    input logic left, right,
                    output logic la, lb, lc, ra, rb, rc);
    typedef enum logic [2:0] {
    S0, S1, S2, S3, S4, S5, S6
} state_t; 
    state_t state, next_state;
    always_ff @(posedge clk) begin
        if (reset)
          state <= S0;
        else
          state <= next_state;
    end
    always_comb begin
        case (state)
            S0: begin
                if (left)
                    next_state = S1;
                else if (right)
                    next_state = S4;
                else
                    next_state = S0;
        end

        S1: next_state = S2;
        S2: next_state = S3;
        S3: next_state = S0;

        S4: next_state = S5;
        S5: next_state = S6;
        S6: next_state = S0;


        default: next_state = S0;
    endcase
end

always_comb begin
    la = 0;
    lb = 0;
    lc = 0;
    ra = 0;
    rb = 0;
    rc = 0;

    case (state)
        S0: begin 
        end

        S1: la = 1;

        S2: begin
            la = 1;
            lb = 1;
        end

        S3: begin
            la = 1;
            lb = 1;
            lc = 1;
        end

        S4: ra = 1;

        S5: begin
            ra = 1;
            rb = 1;
        end

        S6: begin
            ra = 1;
            rb = 1;
            rc = 1;
        end

        default: ;
    endcase
end

    
endmodule 