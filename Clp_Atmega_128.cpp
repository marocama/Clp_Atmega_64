#include "Clp_Atmega_128.h"

static uint8_t bcd2bin(uint8_t val) { return val - 6 * (val >> 4); }
static uint8_t bin2bcd(uint8_t val) { return val + 6 * (val / 10); }

void ioConfig() {

    (DDRD |= (1 << PD4));

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
        case 10: 
            !(state) ? (DDRD |= (1 << PD4)) : (DDRD &= ~ (1 << PD4));
        case 41:
            !(state) ? (DDRA |= (1 << PA1)) : (DDRA &= ~ (1 << PA1));
            break;
        case 42:
            !(state) ? (DDRA |= (1 << PA2)) : (DDRA &= ~ (1 << PA2));
            break;
        case 43:
            !(state) ? (DDRA |= (1 << PA0)) : (DDRA &= ~ (1 << PA0));
            break;
        case 44:
            !(state) ? (DDRA |= (1 << PA3)) : (DDRA &= ~ (1 << PA3));
            break;
        case 45:
            !(state) ? (DDRB |= (1 << PB3)) : (DDRB &= ~ (1 << PB3));
            break;
        case 46:
            !(state) ? (DDRA |= (1 << PA4)) : (DDRA &= ~ (1 << PA4));
            break;
        case 47:
            !(state) ? (DDRB |= (1 << PB2)) : (DDRB &= ~ (1 << PB2));
            break;
        case 48:
            !(state) ? (DDRA |= (1 << PA5)) : (DDRA &= ~ (1 << PA5));
            break;                                                      
        case 51:
            !(state) ? (DDRC |= (1 << PC3)) : (DDRC &= ~ (1 << PC3));
            break;
        case 52:
            !(state) ? (DDRA |= (1 << PA6)) : (DDRA &= ~ (1 << PA6));
            break;
        case 53:
            !(state) ? (DDRC |= (1 << PC4)) : (DDRC &= ~ (1 << PC4));
            break;
        case 54:
            !(state) ? (DDRA |= (1 << PA7)) : (DDRA &= ~ (1 << PA7));
            break;
        case 55:
            !(state) ? (DDRC |= (1 << PC5)) : (DDRC &= ~ (1 << PC5));
            break;
        case 56:
            !(state) ? (DDRG |= (1 << PG2)) : (DDRG &= ~ (1 << PG2));
            break;
        case 57:
            !(state) ? (DDRC |= (1 << PC6)) : (DDRC &= ~ (1 << PC6));
            break;
        case 58:
            !(state) ? (DDRC |= (1 << PC7)) : (DDRC &= ~ (1 << PC7));
            break;
        case 61:
            !(state) ? (DDRF |= (1 << PF5)) : (DDRF &= ~ (1 << PF5));
            break;
        case 62:
            !(state) ? (DDRF |= (1 << PF6)) : (DDRF &= ~ (1 << PF6));
            break;
        case 63:
            !(state) ? (DDRF |= (1 << PF4)) : (DDRF &= ~ (1 << PF4));
            break;
        case 64:
            !(state) ? (DDRF |= (1 << PF0)) : (DDRF &= ~ (1 << PF0));
            break;
        case 65:
            !(state) ? (DDRF |= (1 << PF3)) : (DDRF &= ~ (1 << PF3));
            break;
        case 66:
            !(state) ? (DDRF |= (1 << PF1)) : (DDRF &= ~ (1 << PF1));
            break;
        case 67:
            !(state) ? (DDRF |= (1 << PF2)) : (DDRF &= ~ (1 << PF2));
            break;
        case 68:
            !(state) ? (DDRE |= (1 << PE3)) : (DDRE &= ~ (1 << PE3));
            break;
    }
}

int digitalRead(int input) {

    switch(input) {
        case 11:
            return (PINE & (1<<PG1));
            break;
        case 12:
            return (PINE & (1<<PG0));
            break;
        case 13:
            return (PINE & (1<<PD7));
            break;
        case 14:
            return (PINE & (1<<PD6));
            break;
        case 15:
            return (PINE & (1<<PD5));
            break;
        case 16:
            return (PINB & (1<<PC0));
            break;
        case 17:
            return (PINB & (1<<PC1));
            break;
        case 18:
            return (PINB & (1<<PC2));
            break;
        case 21:
            return (PINE & (1<<PE2));
            break;
        case 22:
            return (PINE & (1<<PE4));
            break;
        case 23:
            return (PINE & (1<<PE5));
            break;
        case 24:
            return (PINE & (1<<PE6));
            break;
        case 25:
            return (PINE & (1<<PE7));
            break;
        case 26:
            return (PINB & (1<<PB0));
            break;
        case 27:
            return (PINB & (1<<PB4));
            break;
        case 28:
            return (PINB & (1<<PB5));
            break;
        case 29:
            return (PINB & (1<<PB6));
            break;
        case 30:
            return (PINB & (1<<PB7));
            break;
        case 31:
            return (PING & (1<<PG3));
            break;
        case 32:
            return (PING & (1<<PG4));
            break;
        case 41:
            return (PINA & (1<<PA1));
            break;
        case 42:
            return (PINA & (1<<PA2));
            break;
        case 43:
            return (PINA & (1<<PA0));
            break;
        case 44:
            return (PINA & (1<<PA3));
            break;
        case 45:
            return (PINB & (1<<PB3));
            break;
        case 46:
            return (PINA & (1<<PA4));
            break;
        case 47:
            return (PINB & (1<<PB2));
            break;
        case 48:
            return (PINA & (1<<PA5));
            break;
        case 51:
            return (PINC & (1<<PC3));
            break;
        case 52:
            return (PINA & (1<<PA6));
            break;
        case 53:
            return (PINC & (1<<PC4));
            break;
        case 54:
            return (PINA & (1<<PA7));
            break;
        case 55:
            return (PINC & (1<<PC5));
            break;
        case 56:
            return (PING & (1<<PG2));
            break;
        case 57:
            return (PINC & (1<<PC6));
            break;
        case 58:
            return (PINC & (1<<PC7));
            break;
        case 61:
            return (PINF & (1<<PF5));
            break;
        case 62:
            return (PINF & (1<<PF6));
            break;
        case 63:
            return (PINF & (1<<PF4));
            break;
        case 64:
            return (PINF & (1<<PF0));
            break;
        case 65:
            return (PINF & (1<<PF3));
            break;
        case 66:
            return (PINF & (1<<PF1));
            break;
        case 67:
            return (PINF & (1<<PF2));
            break;
        case 68:
            return (PINE & (1<<PE3));
            break;
        default:
            return 0;
            break;
    }
} 

void digitalWrite(int output, int state) {

    switch(output) {
        case 11:
            (state) ? (PORTG |= (1 << PG1)) : (PORTG &= ~ (1 << PG1));
            break;
        case 12:
            (state) ? (PORTG |= (1 << PG0)) : (PORTG &= ~ (1 << PG0));
            break;
        case 13:
            (state) ? (PORTD |= (1 << PD7)) : (PORTD &= ~ (1 << PD7));
            break;
        case 14:
            (state) ? (PORTD |= (1 << PD6)) : (PORTD &= ~ (1 << PD6));
            break;
        case 15:
            (state) ? (PORTD |= (1 << PD5)) : (PORTD &= ~ (1 << PD5));
            break;
        case 16:
            (state) ? (PORTC |= (1 << PC0)) : (PORTC &= ~ (1 << PC0));
            break;
        case 17:
            (state) ? (PORTC |= (1 << PC1)) : (PORTC &= ~ (1 << PC1));
            break;
        case 18:
            (state) ? (PORTC |= (1 << PC2)) : (PORTC &= ~ (1 << PC2));
            break;
        case 41:
            (state) ? (PORTA |= (1 << PA1)) : (PORTA &= ~ (1 << PA1));
            break;
        case 42:
            (state) ? (PORTA |= (1 << PA2)) : (PORTA &= ~ (1 << PA2));
            break;
        case 43:
            (state) ? (PORTA |= (1 << PA0)) : (PORTA &= ~ (1 << PA0));
            break;
        case 44:
            (state) ? (PORTA |= (1 << PA3)) : (PORTA &= ~ (1 << PA3));
            break;
        case 45:
            (state) ? (PORTB |= (1 << PB3)) : (PORTB &= ~ (1 << PB3));
            break;
        case 46:
            (state) ? (PORTA |= (1 << PA4)) : (PORTA &= ~ (1 << PA4));
            break;
        case 47:
            (state) ? (PORTB |= (1 << PB2)) : (PORTB &= ~ (1 << PB2));
            break;
        case 48:
            (state) ? (PORTA |= (1 << PA5)) : (PORTA &= ~ (1 << PA5));
            break;
        case 51:
            (state) ? (PORTC |= (1 << PC3)) : (PORTC &= ~ (1 << PC3));
            break;
        case 52:
            (state) ? (PORTA |= (1 << PA6)) : (PORTA &= ~ (1 << PA6));
            break;
        case 53:
            (state) ? (PORTC |= (1 << PC4)) : (PORTC &= ~ (1 << PC4));
            break;
        case 54:
            (state) ? (PORTA |= (1 << PA7)) : (PORTA &= ~ (1 << PA7));
            break;
        case 55:
            (state) ? (PORTC |= (1 << PC5)) : (PORTC &= ~ (1 << PC5));
            break;
        case 56:
            (state) ? (PORTG |= (1 << PG2)) : (PORTG &= ~ (1 << PG2));
            break;
        case 57:
            (state) ? (PORTC |= (1 << PC6)) : (PORTC &= ~ (1 << PC6));
            break;
        case 58:
            (state) ? (PORTC |= (1 << PC7)) : (PORTC &= ~ (1 << PC7));
            break;
        case 61:
            (state) ? (PORTF |= (1 << PF5)) : (PORTF &= ~ (1 << PF5));
            break;
        case 62:
            (state) ? (PORTF |= (1 << PF6)) : (PORTF &= ~ (1 << PF6));
            break;
        case 63:
            (state) ? (PORTF |= (1 << PF4)) : (PORTF &= ~ (1 << PF4));
            break;
        case 64:
            (state) ? (PORTF |= (1 << PF0)) : (PORTF &= ~ (1 << PF0));
            break;
        case 65:
            (state) ? (PORTF |= (1 << PF3)) : (PORTF &= ~ (1 << PF3));
            break;
        case 66:
            (state) ? (PORTF |= (1 << PF1)) : (PORTF &= ~ (1 << PF1));
            break;
        case 67:
            (state) ? (PORTF |= (1 << PF2)) : (PORTF &= ~ (1 << PF2));
            break;
        case 68:
            (state) ? (PORTE |= (1 << PE3)) : (PORTE &= ~ (1 << PE3));
            break;
    }
}

void digitalReverse(int output) {  

    switch(output) {
        case 11:
            (PORTG ^= (1 << PG1));
            break;
        case 12:
            (PORTG ^= (1 << PG0));
            break;
        case 13:
            (PORTD ^= (1 << PD7));
            break;
        case 14:
            (PORTD ^= (1 << PD6));
            break;
        case 15:
            (PORTD ^= (1 << PD5));
            break;
        case 16:
            (PORTC ^= (1 << PC0));
            break;
        case 17:
            (PORTC ^= (1 << PC1));
            break;
        case 18:
            (PORTC ^= (1 << PC2));
            break;
        case 41:
            (PORTA ^= (1 << PA1));
            break;
        case 42:
            (PORTA ^= (1 << PA2));
            break;
        case 43:
            (PORTA ^= (1 << PA0));
            break;
        case 44:
            (PORTA ^= (1 << PA3));
            break;
        case 45:
            (PORTB ^= (1 << PB3));
            break;
        case 46:
            (PORTA ^= (1 << PA4));
            break;
        case 47:
            (PORTB ^= (1 << PB2));
            break;
        case 48:
            (PORTA ^= (1 << PA5));
            break;
        case 51:
            (PORTC ^= (1 << PC3));
            break;
        case 52:
            (PORTA ^= (1 << PA6));
            break;
        case 53:
            (PORTC ^= (1 << PC4));
            break;
        case 54:
            (PORTA ^= (1 << PA7));
            break;
        case 55:
            (PORTC ^= (1 << PC5));
            break;
        case 56:
            (PORTG ^= (1 << PG2));
            break;
        case 57:
            (PORTC ^= (1 << PC6));
            break;
        case 58:
            (PORTC ^= (1 << PC7));
            break;
        case 61:
            (PORTF ^= (1 << PF5));
            break;
        case 62:
            (PORTF ^= (1 << PF6));
            break;
        case 63:
            (PORTF ^= (1 << PF4));
            break;
        case 64:
            (PORTF ^= (1 << PF0));
            break;
        case 65:
            (PORTF ^= (1 << PF3));
            break;
        case 66:
            (PORTF ^= (1 << PF1));
            break;
        case 67:
            (PORTF ^= (1 << PF2));
            break;
        case 68:
            (PORTE ^= (1 << PE3));
            break;
    }
}

void RS232Config(int baudrate) {

    Serial.begin(baudrate);
}

void RS485Config(int baudrate) {

    Serial1.begin(baudrate);
}

void RS485Ct(int state) {

    (state) ? (PORTD |= (1 << PD4)) : (PORTD &= ~ (1 << PD4));
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

void eepromWrite(unsigned int address, char data) {

    Wire.beginTransmission(0x51);    
    Wire.write((int)(address >> 8));     
    Wire.write((int)(address & 0xFF));   
    Wire.write(data);  
    Wire.endTransmission();
    delay(5);
}

char eepromRead(unsigned int address) {

    byte rdata = 0xFF;    
    Wire.beginTransmission(0x51); 
    Wire.write((int)(address >> 8));  
    Wire.write((int)(address & 0xFF));
    Wire.endTransmission(); 
    Wire.requestFrom(0x51, 1); 
    if (Wire.available()) rdata = Wire.read(); 
    return rdata; 
}

void rtcInit() {

    Wire.begin();
}

void rtcSet(int day, int month, int year, int hour, int minute, int second) {

    Wire.beginTransmission(0x68);
    Wire.write((byte)0); 
    Wire.write(bin2bcd(second));
    Wire.write(bin2bcd(minute));
    Wire.write(bin2bcd(hour));
    Wire.write(0);
    Wire.write(bin2bcd(day));
    Wire.write(bin2bcd(month));
    Wire.write(bin2bcd(year - 2000));
    Wire.endTransmission();
}

int* rtcGet() {

    int *values = (int*) malloc(6*sizeof(int));

    Wire.beginTransmission(0x68);
    Wire.write((byte)0); 
    Wire.endTransmission();
    
    Wire.requestFrom(0x68, 7);
    values[0] = bcd2bin(Wire.read() & 0x7F);
    values[1] = bcd2bin(Wire.read());
    values[2] = bcd2bin(Wire.read());
    values[3] = bcd2bin(Wire.read());
    values[4] = bcd2bin(Wire.read());
    values[5] = bcd2bin(Wire.read()) + 2000;

    return values;
}

void VWLCD_Init(int baudrate) {
    
    VWLCD.begin(baudrate);
}

void VWLCD_Clean() {

    VWLCD.write(254);
    VWLCD.write(1);
}

void VWLCD_Pos(char line, char column) {
    
    char address;

    switch(line) {
        case 1: 
            address += 128;
            break;
        case 2: 
            address += 192;
            break;
        case 3: 
            address += 148;
            break;
        case 4: 
            address += 212;
            break;
        default: 
            address += 128;
            break;
    }

    address += column - 1;

    VWLCD.write(254);
    VWLCD.write(address);
}

char VW_4ea2saRead() {

    if(1) {

        return 1;
    }

    return 0;
}

/*
// DESENVOLVER

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