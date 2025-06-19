#pragma once

#define MATRIX_ROWS 6
#define MATRIX_COLS 15

// 6 rows: GP0–GP5
#define MATRIX_ROW_PINS { GP0, GP1, GP2, GP3, GP4, GP5 }

// 15 columns: GP6–GP20
#define MATRIX_COL_PINS { GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP14, GP15, GP16, GP17, GP18, GP19, GP20 }

#define DIODE_DIRECTION ROW2COL

// Encoder pins
#define ENCODERS_PAD_A { GP21 }
#define ENCODERS_PAD_B { GP22 }

// Per-key RGB
#define RGB_DI_PIN GP23
#define DRIVER_LED_TOTAL 82

#define RGB_MATRIX_ENABLE
#define RGB_MATRIX_KEYPRESSES

// Enable only the standard rainbow scroll effect
#define RGB_MATRIX_RAINBOW_MOVING_CHEVRON

// Set the default startup effect to rainbow scroll
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_RAINBOW_MOVING_CHEVRON