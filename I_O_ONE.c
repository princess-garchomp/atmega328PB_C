#include <avr/io.h>

#include "I_O_ONE.h"


void config_button(){
    DDRB &= ~(1ul<<PB7);
    PORTB |= (1ul<<PB7);
}
void config_LED(){
    DDRB |= (1ul<<PB5);
    LED_off();
    
}

void QT1_config(){
    DDRE &= ~(1ul<<PE2);
    PORTE |= (1ul<<PE2);
}
void QT2_config(){
    DDRE &= ~(1ul<<PE3);
    PORTE |= (1ul<<PE3);
}
void QT_config(){
    QT1_config();
    QT2_config();
}


_Bool QT1_pushed(){
    return !(PINE & (1ul<<PE2));
}
_Bool QT1_not_pushed(){
    return !(QT1_pushed());
}

_Bool QT2_pushed(){
    return !(PINE &(1ul<<PE3));
}
_Bool QT2_not_pushed(){
    return !(QT2_pushed);
}

_Bool button_pushed(){
    return !(PINB & (1ul<<PB7));
}
_Bool button_not_pushed(){
    return !(button_pushed());
}

void LED_on(){
    PORTB |= (1ul<<PB5);
}
void LED_off(){
    PORTB &= ~(1ul<<PB5);
}