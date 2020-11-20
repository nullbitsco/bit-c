#pragma once

#define LED_ON          2
#define LED_DIM         1
#define LED_OFF         0

#define GPIO_STATE_LOW  0
#define GPIO_STATE_HIGH 1

#define PIN_LED         F0

void set_bit_c_LED(uint8_t mode) {
    switch(mode) {
        case LED_ON:
            DDRF |= (1<<0);
            (GPIO_STATE_HIGH) ? PORTF |= (1<<0) : PORTF &= ~(1<<0);
        break;

        case LED_DIM:
            DDRF &= ~(1<<0);
        break;

        case LED_OFF:
            DDRF |= (1<<0);
            (GPIO_STATE_LOW) ? PORTF |= (1<<0) : PORTF &= ~(1<<0);
        break;

        default:
        break;
    }
}