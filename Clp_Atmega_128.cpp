#include "Clp_Atmega_128.h"

void ioConfig() {

    (DDRG |= (1 << PG1));
    (DDRG |= (1 << PG0));
    (DDRD |= (1 << PD7));
    (DDRD |= (1 << PD6));
    (DDRD |= (1 << PD5));
    (DDRC |= (1 << PC0));
    (DDRC |= (1 << PC1));
    (DDRC |= (1 << PC2));
    (DDRE &= ~ (1 << PE2));
    (DDRE &= ~ (1 << PE4));
    (DDRE &= ~ (1 << PE5));
    (DDRE &= ~ (1 << PE6));
    (DDRE &= ~ (1 << PE7));
    (DDRB &= ~ (1 << PB0));
    (DDRB &= ~ (1 << PB4));
    (DDRB &= ~ (1 << PB5));
    (DDRB &= ~ (1 << PB6));
    (DDRB &= ~ (1 << PB7));
    (DDRG &= ~ (1 << PG3));
    (DDRG &= ~ (1 << PG4));
}

void pinMode(int pin, int state) {

    switch(pin) {
        case 1:
            (state) ? (DDRA |= (1 << PA1)) : (DDRA &= ~ (1 << PA1));
            break;
        case 2:
            (state) ? (DDRA |= (1 << PA2)) : (DDRA &= ~ (1 << PA2));
            break;
        case 3:
            (state) ? (DDRA |= (1 << PA0)) : (DDRA &= ~ (1 << PA0));
            break;
        case 4:
            (state) ? (DDRA |= (1 << PA3)) : (DDRA &= ~ (1 << PA3));
            break;
        case 5:
            (state) ? (DDRB |= (1 << PB3)) : (DDRB &= ~ (1 << PB3));
            break;
        case 6:
            (state) ? (DDRA |= (1 << PA4)) : (DDRA &= ~ (1 << PA4));
            break;
        case 7:
            (state) ? (DDRB |= (1 << PB2)) : (DDRB &= ~ (1 << PB2));
            break;
        case 8:
            (state) ? (DDRA |= (1 << PA5)) : (DDRA &= ~ (1 << PA5));
            break;                                                      
        case 9:
            (state) ? (DDRC |= (1 << PC3)) : (DDRC &= ~ (1 << PC3));
            break;
        case 10:
            (state) ? (DDRA |= (1 << PA6)) : (DDRA &= ~ (1 << PA6));
            break;
        case 11:
            (state) ? (DDRC |= (1 << PC4)) : (DDRC &= ~ (1 << PC4));
            break;
        case 12:
            (state) ? (DDRA |= (1 << PA7)) : (DDRA &= ~ (1 << PA7));
            break;
        case 13:
            (state) ? (DDRC |= (1 << PC5)) : (DDRC &= ~ (1 << PC5));
            break;
        case 14:
            (state) ? (DDRG |= (1 << PG2)) : (DDRG &= ~ (1 << PG2));
            break;
        case 15:
            (state) ? (DDRC |= (1 << PC6)) : (DDRC &= ~ (1 << PC6));
            break;
        case 16:
            (state) ? (DDRC |= (1 << PC7)) : (DDRC &= ~ (1 << PC7));
            break;
        case 17:
            (state) ? (DDRF |= (1 << PF5)) : (DDRF &= ~ (1 << PF5));
            break;
        case 18:
            (state) ? (DDRF |= (1 << PF6)) : (DDRF &= ~ (1 << PF6));
            break;
        case 19:
            (state) ? (DDRF |= (1 << PF4)) : (DDRF &= ~ (1 << PF4));
            break;
        case 20:
            (state) ? (DDRF |= (1 << PF0)) : (DDRF &= ~ (1 << PF0));
            break;
        case 21:
            (state) ? (DDRF |= (1 << PF3)) : (DDRF &= ~ (1 << PF3));
            break;
        case 22:
            (state) ? (DDRF |= (1 << PF1)) : (DDRF &= ~ (1 << PF1));
            break;
        case 23:
            (state) ? (DDRF |= (1 << PF2)) : (DDRF &= ~ (1 << PF2));
            break;
        case 24:
            (state) ? (DDRE |= (1 << PE3)) : (DDRE &= ~ (1 << PE3));
            break;
    }
}

int digitalRead(int input) {

    switch(input) {
        case 1:
            return (PINE & (1<<PE2));
            break;
        case 2:
            return (PINE & (1<<PE4));
            break;
        case 3:
            return (PINE & (1<<PE5));
            break;
        case 4:
            return (PINE & (1<<PE6));
            break;
        case 5:
            return (PINE & (1<<PE7));
            break;
        case 6:
            return (PINB & (1<<PB0));
            break;
        case 7:
            return (PINB & (1<<PB4));
            break;
        case 8:
            return (PINB & (1<<PB5));
            break;
        case 9:
            return (PINB & (1<<PB6));
            break;
        case 10:
            return (PINB & (1<<PB7));
            break;
        case 11:
            return (PING & (1<<PG3));
            break;
        case 12:
            return (PING & (1<<PG4));
            break;
        default:
            return 0;
            break;
    }
} 

void digitalWrite(int output, int state) {

    switch(output) {
        case 1:
            (state) ? (PORTG |= (1 << PG1)) : (PORTG &= ~ (1 << PG1));
            break;
        case 2:
            (state) ? (PORTG |= (1 << PG0)) : (PORTG &= ~ (1 << PG0));
            break;
        case 3:
            (state) ? (PORTD |= (1 << PD7)) : (PORTD &= ~ (1 << PD7));
            break;
        case 4:
            (state) ? (PORTD |= (1 << PD6)) : (PORTD &= ~ (1 << PD6));
            break;
        case 5:
            (state) ? (PORTD |= (1 << PD5)) : (PORTD &= ~ (1 << PD5));
            break;
        case 6:
            (state) ? (PORTC |= (1 << PC0)) : (PORTC &= ~ (1 << PC0));
            break;
        case 7:
            (state) ? (PORTC |= (1 << PC1)) : (PORTC &= ~ (1 << PC1));
            break;
        case 8:
            (state) ? (PORTC |= (1 << PC2)) : (PORTC &= ~ (1 << PC2));
            break;
    }
}

void digitalReverse(int output) {  

    switch(output) {
        case 1:
            (PORTG ^= (1 << PG1));
            break;
        case 2:
            (PORTG ^= (1 << PG0));
            break;
        case 3:
            (PORTD ^= (1 << PD7));
            break;
        case 4:
            (PORTD ^= (1 << PD6));
            break;
        case 5:
            (PORTD ^= (1 << PD5));
            break;
        case 6:
            (PORTC ^= (1 << PC0));
            break;
        case 7:
            (PORTC ^= (1 << PC1));
            break;
        case 8:
            (PORTC ^= (1 << PC2));
            break;
    }
}

void rs485Config(int baudrate) {

    (DDRD |= (1 << PD4));
    (PORTD |= (1 << PD4));
}

void analogConfig() {

    ADCSRA = (1<<ADEN | 1<<ADPS2 | 1<<ADPS1 | 1<<ADPS0 );
}

int analogRead() {

    ADMUX=(1<<REFS0 | 7);                  
    ADCSRA |= (1<<ADSC);               
    loop_until_bit_is_clear(ADCSRA, ADSC); 
    return ADC;
}

void LCD_Clean() {

    RS232.write(254);
    RS232.write(1);
}

void LCD_Pos(char line, char column) {
    
    char address;

    switch(line) {
        case 0: 
            address += 128;
            break;
        case 1: 
            address += 192;
            break;
        case 2: 
            address += 148;
            break;
        case 3: 
            address += 212;
            break;
        default: 
            address += 128;
            break;
    }

    address += column;

    RS232.write(254);
    RS232.write(address);
}

void LCD_BackLight(char status) {

    RS232.write(254);
    status ? RS232.write(85) : RS232.write(86);
}

/* ---- PARA IMPLEMENTAR

void Clp_Atmega_128::eepromWrite(unsigned int address, byte data) 
{
    Wire.beginTransmission(0x51);    
    Wire.write((int)(address >> 8));     
    Wire.write((int)(address & 0xFF));   
    Wire.write(data);  
    Wire.endTransmission();
    delay(5);
}

char Clp_Atmega_128::eepromRead(unsigned int address) 
{
    byte rdata = 0xFF;    
    Wire.beginTransmission(0x51); 
    Wire.write((int)(address >> 8));  
    Wire.write((int)(address & 0xFF));
    Wire.endTransmission(); 
    Wire.requestFrom(0x51, 1); 
    if (Wire.available()) rdata = Wire.read(); 
    return rdata; 
}

// DESENVOLVER

void Clp_Atmega_128::rtcSetTime(int hour, int minute, int second) 
{
}

void Clp_Atmega_128::rtcSetDate(int day, int month, int year) 
{
}

char Clp_Atmega_128::rtcGetTime() 
{
}

char Clp_Atmega_128::rtcGetDate() 
{
}

char Clp_Atmega_128::rtcGetDay() 
{
}

void Clp_Atmega_128::softwarePWM(int output, int dutyCicle) 
{
}

void Clp_Atmega_128::config4EA() 
{
}

int Clp_Atmega_128::read4EA() 
{
}

void Clp_Atmega_128::config4SA() 
{
}

void Clp_Atmega_128::write4SA(int value_1, int value_2, int value_3, int value_4) 
{
}
*/