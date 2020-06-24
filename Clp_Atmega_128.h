/**************************************************************************************************************

* Biblioteca para programação da CLP Atmega 64 no ambiente de desenvolvimento IDE Arduino.

* VW Soluções: http://vwsolucoes.com/
* Autor: Marcus Roberto
* Versão: 1.0
 
**************************************************************************************************************/

#ifndef _CLP_ATMEGA_128_H
#define _CLP_ATMEGA_128_H

#include <avr/io.h>

// PORTAS SERIAIS
#define RS485 Serial
#define RS232 Serial

// BIBLIOTECA EEPROM
#define EEPROM Wire

// ESTADOS LÓGICOS
#define HIGH 1
#define LOW  0

// SAÍDAS DA CLP
#define S1   1
#define S2   2
#define S3   3
#define S4   4
#define S5   5
#define S6   6
#define S7   7
#define S8   8

// ENTRADAS DA CLP
#define E1   1
#define E2   2
#define E3   3
#define E4   4
#define E5   5
#define E6   6
#define E7   7
#define E8   8
#define E9   9
#define E10  10
#define E11  11
#define E12  12

// HEADER 1
#define PA1  1
#define PA2  2
#define PA0  3
#define PA3  4
#define PB3  5
#define PA4  6
#define PB2  7
#define PA5  8

// HEADER 2
#define PC3  9
#define PA6  10
#define PC4  11
#define PA7  12
#define PC5  13
#define PG2  14
#define PC6  15
#define PC7  16

// HEADER 3
#define PF5  17
#define PF6  18
#define PF4  19
#define PF0  20
#define PF3  21
#define PF1  22
#define PF2  23
#define PE3  24

#endif

void ioConfig();										 // Definição das entradas e saídas 	
void pinMode(int pin, int state);					     // Definição dos pinos dos headers adicionais
void digitalWrite(int output, int state);				 // Definição do estado lógico de uma saída
void digitalReverse(int output);						 // Inverte o estado lógico de uma saída	
int  digitalRead(int input);						     // Realiza a leitura do estado lógico de uma entrada
void rs485Config(int baudrate);							 // Configura porta serial RS485
void analogConfig();									 // Configura a entrada analógica
int  analogRead();										 // Realiza a leitura da entrada analógica
void LCD_Clean();										 // Limpa o LCD
void LCD_Pos(char line, char column);					 // Posiciona o cursor do LCD
void LCD_BackLight(char status);						 // Controla o backlight do LCD
		
