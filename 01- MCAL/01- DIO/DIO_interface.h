#ifndef DIO_INTERFAC_H
#define DIO_INTERFAC_H

#define DIO_PORTA   0
#define DIO_PORTB   1
#define DIO_PORTC   2
#define DIO_PORTD   3

/* Function prototype*/
void DIO_voidSetPortDirection( u8 Copy_u8Port , u8 Copy_u8Direction );
void DIO_voidSetPortValue( u8 Copy_u8Port , u8 Copy_u8Value );


#endif