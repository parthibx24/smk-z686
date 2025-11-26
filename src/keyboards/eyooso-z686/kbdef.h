#pragma once

#include "sh68f90a.h"

// =============================================================================
// MATRIX SIZE
// =============================================================================
#define MATRIX_ROWS 5
#define MATRIX_COLS 15

// =============================================================================
// ROW PINS (unchanged)
// =============================================================================
// ROW0 → P7. 1, ROW1 → P7.2, ROW2 → P7.3, ROW3 → P5.3, ROW4 → P5.4

// Row Pin Bits (for bulk port operations)
#define KB_R0_P7_1 _P7_1
#define KB_R1_P7_2 _P7_2
#define KB_R2_P7_3 _P7_3
#define KB_R3_P5_3 _P5_3
#define KB_R4_P5_4 _P5_4

// Row Pins (for direct access)
#define KB_R0 P7_1
#define KB_R1 P7_2
#define KB_R2 P7_3
#define KB_R3 P5_3
#define KB_R4 P5_4

// =============================================================================
// COLUMN PINS (FLIPPED - original COL14 is now COL0, etc.)
// =============================================================================
// Original → New
// COL14 (P1.4) → COL0
// COL13 (P1.5) → COL1
// COL12 (P2.0) → COL2
// COL11 (P2. 1) → COL3
// COL10 (P2.2) → COL4
// COL9  (P2.3) → COL5
// COL8  (P2. 4) → COL6
// COL7  (P2.5) → COL7
// COL6  (P3.0) → COL8
// COL5  (P3.1) → COL9
// COL4  (P3.2) → COL10
// COL3  (P3.3) → COL11
// COL2  (P3. 4) → COL12
// COL1  (P3.5) → COL13
// COL0  (P1.3) → COL14

// Column Pin Bits (for bulk port operations)
// Port 1 columns
#define KB_C0_P1_4   _P1_4   // COL0 (was COL14)
#define KB_C1_P1_5   _P1_5   // COL1 (was COL13)
#define KB_C14_P1_3  _P1_3   // COL14 (was COL0)

// Port 2 columns
#define KB_C2_P2_0   _P2_0   // COL2 (was COL12)
#define KB_C3_P2_1   _P2_1   // COL3 (was COL11)
#define KB_C4_P2_2   _P2_2   // COL4 (was COL10)
#define KB_C5_P2_3   _P2_3   // COL5 (was COL9)
#define KB_C6_P2_4   _P2_4   // COL6 (was COL8)
#define KB_C7_P2_5   _P2_5   // COL7 (was COL7)

// Port 3 columns
#define KB_C8_P3_0   _P3_0   // COL8 (was COL6)
#define KB_C9_P3_1   _P3_1   // COL9 (was COL5)
#define KB_C10_P3_2  _P3_2   // COL10 (was COL4)
#define KB_C11_P3_3  _P3_3   // COL11 (was COL3)
#define KB_C12_P3_4  _P3_4   // COL12 (was COL2)
#define KB_C13_P3_5  _P3_5   // COL13 (was COL1)

// Column Pins (for direct access)
#define KB_C0  P1_4   // COL0 (was COL14)
#define KB_C1  P1_5   // COL1 (was COL13)
#define KB_C2  P2_0   // COL2 (was COL12)
#define KB_C3  P2_1   // COL3 (was COL11)
#define KB_C4  P2_2   // COL4 (was COL10)
#define KB_C5  P2_3   // COL5 (was COL9)
#define KB_C6  P2_4   // COL6 (was COL8)
#define KB_C7  P2_5   // COL7 (was COL7)
#define KB_C8  P3_0   // COL8 (was COL6)
#define KB_C9  P3_1   // COL9 (was COL5)
#define KB_C10 P3_2   // COL10 (was COL4)
#define KB_C11 P3_3   // COL11 (was COL3)
#define KB_C12 P3_4   // COL12 (was COL2)
#define KB_C13 P3_5   // COL13 (was COL1)
#define KB_C14 P1_3   // COL14 (was COL0)

// =============================================================================
// LED ROW PINS (unchanged)
// =============================================================================
#define LED_R0_P6_1 _P6_1
#define LED_R1_P6_2 _P6_2
#define LED_R2_P6_3 _P6_3
#define LED_R3_P6_4 _P6_4
#define LED_R4_P6_5 _P6_5

#define LED_R0 P6_1
#define LED_R1 P6_2
#define LED_R2 P6_3
#define LED_R3 P6_4
#define LED_R4 P6_5

// =============================================================================
// LED PWM REGISTERS (flipped to match new column order)
// =============================================================================
#define LED_PWM_C0  PWM24   // P1.4
#define LED_PWM_C1  PWM25   // P1.5
#define LED_PWM_C2  PWM10   // P2. 0
#define LED_PWM_C3  PWM11   // P2. 1
#define LED_PWM_C4  PWM12   // P2. 2
#define LED_PWM_C5  PWM13   // P2. 3
#define LED_PWM_C6  PWM14   // P2. 4
#define LED_PWM_C7  PWM15   // P2. 5
#define LED_PWM_C8  PWM00   // P3. 0
#define LED_PWM_C9  PWM01   // P3. 1
#define LED_PWM_C10 PWM02   // P3. 2
#define LED_PWM_C11 PWM03   // P3. 3
#define LED_PWM_C12 PWM04   // P3. 4
#define LED_PWM_C13 PWM05   // P3. 5
#define LED_PWM_C14 PWM23   // P1. 3
