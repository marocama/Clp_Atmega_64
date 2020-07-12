/**************************************************************************************************************

* Biblioteca para programação da CLP Atmega 64 no ambiente de desenvolvimento IDE Arduino.

* Autor: Marcus Roberto
* Versão: 1.0
 
**************************************************************************************************************/

#ifndef _CLP_ATMEGA_128_H
#define _CLP_ATMEGA_128_H

#include <Arduino.h>
#include <Wire.h>

#include <avr/io.h>
#include <avr/pgmspace.h>

// PORTAS SERIAIS
#define RS232 Serial
#define RS485 Serial1
#define CT 10

// OUTROS
#define VWLCD RS485

#define RTC     6
#define SEGUNDO 0
#define MINUTO  1
#define HORA    2
#define DIA     3
#define MES     4
#define ANO     5

// BIBLIOTECA EEPROM
#define EEPROM Wire

// ESTADOS LÓGICOS
#define HIGH 1
#define LOW  0
#define INPUT  1
#define OUTPUT 0

// SAÍDAS DA CLP
#define S1   11
#define S2   12
#define S3   13
#define S4   14
#define S5   15
#define S6   16
#define S7   17
#define S8   18
#define _PG1   11
#define _PG0   12
#define _PD7   13
#define _PD6   14
#define _PD5   15
#define _PC0   16
#define _PC1   17
#define _PC2   18


// ENTRADAS DA CLP
#define E1   21
#define E2   22
#define E3   23
#define E4   24
#define E5   25
#define E6   26
#define E7   27
#define E8   28
#define E9   29
#define E10  30
#define E11  31
#define E12  32
#define _PE2   21
#define _PE4   22
#define _PE5   23
#define _PE6   24
#define _PE7   25
#define _PB0   26
#define _PB4   27
#define _PB5   28
#define _PB6   29
#define _PB7   30
#define _PG3   31
#define _PG4   32

// HEADER 1
#define _PA1  41
#define _PA2  42
#define _PA0  43
#define _PA3  44
#define _PB3  45
#define _PA4  46
#define _PB2  47
#define _PA5  48

// HEADER 2
#define _PC3  51
#define _PA6  52
#define _PC4  53
#define _PA7  54
#define _PC5  55
#define _PG2  56
#define _PC6  57
#define _PC7  58

// HEADER 3
#define _PF5  61
#define _PF6  62
#define _PF4  63
#define _PF0  64
#define _PF3  65
#define _PF1  66
#define _PF2  67
#define _PE3  68

#endif

void ioConfig();										 // Definição das entradas e saídas 	

void pinMode(int pin, int state);					     // Definição dos pinos dos headers adicionais
void digitalWrite(int output, int state);				 // Definição do estado lógico de uma saída
void digitalReverse(int output);						 // Inverte o estado lógico de uma saída	
int  digitalRead(int input);						     // Realiza a leitura do estado lógico de uma entrada

void RS232Config(int baudrate);							 // Configura porta serial RS232

void RS485Config(int baudrate);							 // Configura porta serial RS485
void RS485Ct(int state);							 	 // Configura o pino CT

void analogConfig();									 // Configura a entrada analógica
int  analogRead();										 // Realiza a leitura da entrada analógica

void eepromWrite(unsigned int address, char data);		 // Escrita em endereço da memória EEPROM
char eepromRead(unsigned int address);				     // Leitura em endereço da memória EEPROM

void rtcInit();											 // Inicializa o RTC
void rtcSet(int day, int month, int year, int hour, int minute, int second);  // Configura o horário do RTC
int* rtcGet();							     			 //	Configura a data do RTC

void VWLCD_Init(int baudrate);							 // Inicializa o LCD
void VWLCD_Clean();										 // Limpa o LCD
void VWLCD_Pos(char line, char column);					 // Posiciona o cursor do LCD

char VW_4ea2saRead();									 // Realiza a leitura do protocolo da 4EA2SA
		
