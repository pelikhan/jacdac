// Autogenerated C header file for Button
#ifndef _JACDAC_SPEC_BUTTON_H
#define _JACDAC_SPEC_BUTTON_H 1

#define JD_SERVICE_CLASS_BUTTON  0x1473a263

/**
 * Read-only bool (uint8_t). Indicates whether the button is currently active (pressed).
 */
#define JD_BUTTON_REG_PRESSED JD_REG_READING

/**
 * Emitted when button goes from inactive (`pressed == 0`) to active.
 */
#define JD_BUTTON_EV_DOWN JD_EV_ACTIVE

/**
 * Argument: time ms uint32_t. Emitted when button goes from active (`pressed == 1`) to inactive. The 'time' parameter 
 * records the amount of time between the down and up events.
 */
#define JD_BUTTON_EV_UP JD_EV_INACTIVE

/**
 * Argument: time ms uint32_t. Emitted when the press time is greater than 500ms, and then at least every 500ms 
 * as long as the button remains pressed. The 'time' parameter records the the amount of time
 * that the button has been held (since the down event).
 */
#define JD_BUTTON_EV_HOLD 0x81

#endif
