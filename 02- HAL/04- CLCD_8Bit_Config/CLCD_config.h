#ifndef CLCD_CONFIG_H
#define CLCD_CONFIG_H

/*
    Options:-
	DIO_PORTA
	DIO_PORTB
	DIO_PORTC
	DIO_PORTD
*/

#define CLCD_DATA_PORT       DIO_PORTA
#define CLCD_CONTROL_PORT    DIO_PORTD

/*
    Options:-
	DIO_PIN0
	DIO_PIN1
	DIO_PIN2
	DIO_PIN3
	DIO_PIN4
	DIO_PIN5
	DIO_PIN6
	DIO_PIN7
*/

#define CLCD_RS              DIO_PIN0
#define CLCD_RW              DIO_PIN1
#define CLCD_EN              DIO_PIN2



#endif