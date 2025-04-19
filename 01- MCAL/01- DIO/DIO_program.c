#include "STD_TYPES.h" 
#include "BIT_MATH.h" 

#include "DIO_interface.h" 
#include "DIO_private.h" 
#include "DIO_config.h" 

 
 
void DIO_voidSetPortDirection( u8 Copy_u8Port , u8 Copy_u8Direction ){
	if ( Copy_u8Port >= DIO_PORTA && Copy_u8Port <= DIO_PORTD){
		switch ( Copy_u8Port ){
			case DIO_PORTA: DDRA = Copy_u8Direction ; break; 
			case DIO_PORTB: DDRB = Copy_u8Direction ; break; 
			case DIO_PORTC: DDRC = Copy_u8Direction ; break; 
			case DIO_PORTD: DDRD = Copy_u8Direction ; break; 
		}
		
	}
	
}
void DIO_voidSetPortValue( u8 Copy_u8Port , u8 Copy_u8Value ){
	if ( Copy_u8Port >= DIO_PORTA && Copy_u8Port <= DIO_PORTD){
		switch ( Copy_u8Port ){
			case DIO_PORTA: PORTA = Copy_u8Value ; break; 
			case DIO_PORTB: PORTB = Copy_u8Value ; break; 
			case DIO_PORTC: PORTC = Copy_u8Value ; break; 
			case DIO_PORTD: PORTD = Copy_u8Value ; break; 
		}
		
	}
	
	
}