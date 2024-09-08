/*
 * servo motor.c
 *
 * Created: 8/29/2024 8:23:29 AM
 * Author : Al-Arab
 */ 

#include <avr/io.h>
#define  F_CPU 8000000UL
#include "STD_Macros.h"
#include "timer.h"
#include <util/delay.h>


int main(void)
{
    
    while (1) 
    {
		timer1_wave_fastPWM(1.5);
		_delay_ms(1000);
		
		timer1_wave_fastPWM(1);
		_delay_ms(1000);
		
		timer1_wave_fastPWM(2);
		_delay_ms(1000);
		
		
    }
}

