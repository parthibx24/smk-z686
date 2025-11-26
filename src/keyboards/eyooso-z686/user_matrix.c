#include "kbdef.h"
#include "user_matrix.h"

void user_matrix_pre_scan(uint8_t col)
{
    // Set all columns HIGH (inactive)
    P1 |= (uint8_t)(KB_C0_P1_4 | KB_C1_P1_5 | KB_C14_P1_3);
    P2 |= (uint8_t)(KB_C2_P2_0 | KB_C3_P2_1 | KB_C4_P2_2 | KB_C5_P2_3 | KB_C6_P2_4 | KB_C7_P2_5);
    P3 |= (uint8_t)(KB_C8_P3_0 | KB_C9_P3_1 | KB_C10_P3_2 | KB_C11_P3_3 | KB_C12_P3_4 | KB_C13_P3_5);

    // Pull current column LOW (active)
    switch (col) {
        case 0:  KB_C0  = 0; break;
        case 1:  KB_C1  = 0; break;
        case 2:  KB_C2  = 0; break;
        case 3:  KB_C3  = 0; break;
        case 4:  KB_C4  = 0; break;
        case 5:  KB_C5  = 0; break;
        case 6:  KB_C6  = 0; break;
        case 7:  KB_C7  = 0; break;
        case 8:  KB_C8  = 0; break;
        case 9:  KB_C9  = 0; break;
        case 10: KB_C10 = 0; break;
        case 11: KB_C11 = 0; break;
        case 12: KB_C12 = 0; break;
        case 13: KB_C13 = 0; break;
        case 14: KB_C14 = 0; break;
    }
}

uint8_t user_matrix_scan_col(uint8_t col)
{
    (void)col; // unused
    
    // Read row pins and pack into byte
    // ROW0=P7.1, ROW1=P7. 2, ROW2=P7.3 → bits 1,2,3 of P7
    // ROW3=P5.3, ROW4=P5.4 → bits 3,4 of P5
    //
    // Return format: bit0=R0, bit1=R1, bit2=R2, bit3=R3, bit4=R4, bits5-7=1
    
    uint8_t rows = 0;
    
    // P7 bits 1,2,3 → result bits 0,1,2
    rows |= ((P7 >> 1) & 0x07);
    
    // P5 bits 3,4 → result bits 3,4
    rows |= (P5 & 0x18);
    
    // Set unused bits high (not pressed)
    rows |= 0xE0;
    
    return rows;
}

void user_matrix_post_scan()
{
    // Set all columns LOW
    P1 &= (uint8_t)~(KB_C0_P1_4 | KB_C1_P1_5 | KB_C14_P1_3);
    P2 &= (uint8_t)~(KB_C2_P2_0 | KB_C3_P2_1 | KB_C4_P2_2 | KB_C5_P2_3 | KB_C6_P2_4 | KB_C7_P2_5);
    P3 &= (uint8_t)~(KB_C8_P3_0 | KB_C9_P3_1 | KB_C10_P3_2 | KB_C11_P3_3 | KB_C12_P3_4 | KB_C13_P3_5);
}
