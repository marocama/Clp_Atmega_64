# CLP Atmega 64

Esta biblioteca foi desenvolvida para facilitar o desenvolvimento de softwares para a CLP Atmega 64, utilizando o ambiente Arduino IDE.

### Instalação

Clone o repositório, em sua pasta `libraries` dentro da pasta `Arduino`, normalmente localizada em `Documentos` no Windows.

```sh
$ git clone https://github.com/marocama/Clp_Atmega_64.git
```

### Definições padrão

Algumas definições são feitas por padrão pela biblioteca para facilitar seu uso.

Tais definições podem ser utilizadas no decorrer do código como é mostrado nos `exemplos`.

⋅⋅* `E1`: Entrada 1
⋅⋅* `E2`: Entrada 2
⋅⋅* `E3`: Entrada 3
⋅⋅* `E4`: Entrada 4
⋅⋅* `E5`: Entrada 5
⋅⋅* `E6`: Entrada 6
⋅⋅* `E7`: Entrada 7
⋅⋅* `E8`: Entrada 8
⋅⋅* `E9`: Entrada 9
⋅⋅* `E10`: Entrada 10
⋅⋅* `E11`: Entrada 11
⋅⋅* `E12`: Entrada 12

⋅⋅* `S1`: Saída 1
⋅⋅* `S2`: Saída 2
⋅⋅* `S3`: Saída 3
⋅⋅* `S4`: Saída 4
⋅⋅* `S5`: Saída 5
⋅⋅* `S6`: Saída 6
⋅⋅* `S7`: Saída 7
⋅⋅* `S8`: Saída 8

### Funções disponíveis

A lista a seguir consta todas as funções que estão disponíveis, testas e em funcionamento no momento.

Caso tenha sugestões de novas inclusões e/ou alterações, entre em contato no meio fornecido abaixo.

#### Definição padrão das entradas e saídas 
```sh
$ void ioConfig();
```

#### Definição dos pinos dos headers adicionais e/ou eventuais expansões
```sh
$ void pinMode(int pin, int state);
```

#### Definição do estado lógico de uma saída
```sh
$ void digitalWrite(int output, int state);
```

#### Inverte o estado lógico de uma saída	
```sh
$ void digitalReverse(int output);
```

#### Realiza a leitura do estado lógico de uma entrada
```sh
$ int digitalRead(int input);
```

#### Configura porta serial RS485
```sh
$ void rs485Config(int baudrate);
```

#### Configura a entrada analógica
```sh
$ void analogConfig();
```

#### Realiza a leitura da entrada analógica
```sh
$ int analogRead();
```

#### Limpa o CLP
```sh
$ void LCD_Clean();	
```

#### Posiciona o cursor do LCD
```sh
$ void LCD_Pos(char line, char column);	
```

#### Controla o backlight do LCD
```sh
$ void LCD_BackLight(char status);
```

### Exemplos

É possível conferir uma ampla variedade de exemplos que abrangem todas as funções disponíbilizadas por essa biblioteca, além de outros exemplos demonstrando a utilização dessa CLP com outros produtos como placas de expansão e entre outros.

Para isso, acesse `Arquivo > Exemplos > Clp_Atmega_128` dentro da Arduino IDE.

### Vídeos

Acesse nosso canal do youtube para acompanhar vídeos demonstrativos dessa biblioteca e outros temas relevantes.

### Sobre a CLP
- Manual
- Instalação na Arduino IDE
