module lab4_FS#(

) ( input   logic                    clk,
    input   logic                    reset,
    input   logic                    N, S, E, W,
    output  logic                    G0, G1
);
    typedef enum logic [2:0] {
        R0, R1, R2, R3, R4, R5, R6
    } room_state_t; 

    room_state_t state, next_state;

    typedef enum logic {
        no_sword,
        has_sword
    } sword_state_t;
    sword_state_t sword_state, next_sword_state;

    always_ff @(posedge clk) begin
        if (reset) begin
            state       <= R0;
            sword_state <= no_sword;
        end
        else begin
            state       <= next_state;
            sword_state <= next_sword_state;
        end
    end
    
    always_comb begin
        case (state)
            R0: begin
                if (E)
                    next_state = R1;
                else 
                    next_state = R0;
            end
            R1: begin
                if (S)
                    next_state = R2;
                else if (W)
                    next_state = R0;
                else
                    next_state = R1;
            end
            R2: begin 
                if (W)
                    next_state = R3;
                    
                else if (N)
                    next_state = R1;
                else if (E)
                    next_state = R4;
                else
                    next_state = R2;
            end
            R3: begin
                if (E)
                    next_state = R2;
                else
                    next_state = R3;
            end
            R4: begin
                if (sword_state == no_sword)
                    next_state = R5;
                else 
                    next_state = R6;
            end
            R5: begin
                next_state = R0;
            end 
            R6: begin
                next_state = R0;
            end
            default: next_state = R0;
        endcase
    end

    always_comb begin
        next_sword_state = sword_state;
        case (sword_state)
            no_sword: begin
                if (state == R3 || next_state == R3)
                    next_sword_state = has_sword;
                else
                    next_sword_state = no_sword;
            end
            has_sword: begin
                next_sword_state = has_sword;
            end

            default: next_sword_state = no_sword;
        endcase
    end

    always_comb begin 
        G0 = 0;  
        G1 = 0;
        case (state)

            R5: begin
                G0 = 1;
                G1 = 0;
            end
            R6: begin
                G0 = 0;
                G1 = 1;
            end
            default: begin
                G0 = 0;
                G1 = 0;
            end
        endcase
    end
endmodule


                



