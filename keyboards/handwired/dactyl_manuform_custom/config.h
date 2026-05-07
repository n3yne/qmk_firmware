#pragma once

// Left half column pins are reversed relative to right half
// Right half cols (L->R): B4 B5 E6 C6 D7 D4
// Left half cols (L->R):  D4 D7 C6 E6 B5 B4  (mirrored)
#define MATRIX_COL_PINS_RIGHT { B4, B5, E6, C6, D7, D4 }
#define MATRIX_COL_PINS { D4, D7, C6, E6, B5, B4 }