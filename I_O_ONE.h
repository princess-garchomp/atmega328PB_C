
#ifndef I_O_ONE_H
#define	I_O_ONE_H

#include <stdint.h>

void config_button();
void config_LED();

void QT1_config();
void QT2_config();
void QT_config();


_Bool button_pushed();
_Bool button_not_pushed();

_Bool QT1_pushed();
_Bool QT1_not_pushed();

_Bool QT2_pushed();
_Bool QT2_not_pushed();


void LED_on();
void LED_off();

#endif


