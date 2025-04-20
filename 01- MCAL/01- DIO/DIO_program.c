#include "STD_TYPES.h" 
#include "BIT_MATH.h" 

#include "DIO_interface.h" 
#include "DIO_private.h" 
#include "DIO_config.h" 

 
 
DIO_ErrorStatus DIO_enumSetPortDirection( u8 Copy_u8Port , u8 Copy_u8Direction ){
	
	DIO_ErrorStatus LOC_enumState = DIO_OK ;
	
		switch ( Copy_u8Port ){
			case DIO_PORTA: DDRA_REG = Copy_u8Direction ; break; 
			case DIO_PORTB: DDRB_REG = Copy_u8Direction ; break; 
			case DIO_PORTC: DDRC_REG = Copy_u8Direction ; break; 
			case DIO_PORTD: DDRD_REG = Copy_u8Direction ; break; 
			default       : LOC_enumState = DIO_NOK ; break;   
		}
		
	return LOC_enumState ;
		
	
	
}
DIO_ErrorStatus DIO_enumSetPortValue( u8 Copy_u8Port , u8 Copy_u8Value ){
	
	DIO_ErrorStatus LOC_enumState = DIO_OK ;
	
		switch ( Copy_u8Port ){
			case DIO_PORTA: PORTA_REG = Copy_u8Value     ; break; 
			case DIO_PORTB: PORTB_REG = Copy_u8Value     ; break; 
			case DIO_PORTC: PORTC_REG = Copy_u8Value     ; break; 
			case DIO_PORTD: PORTD_REG = Copy_u8Value     ; break; 
			default       : LOC_enumState = DIO_NOK  ; break;
		}
		
	
	return LOC_enumState ;
	
}

DIO_ErrorStatus DIO_enumSetPinDirection(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Direction ){
	DIO_ErrorStatus LOC_enumState = DIO_OK ;
	if ( Copy_u8Pin >= DIO_PIN0 && Copy_u8Pin <= DIO_PIN7 ) {
		
	}else{
		LOC_enumState = DIO_NOK ;
	}
	
	return LOC_enumState ;	
}
DIO_ErrorStatus DIO_enumSetPintValue(u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value){
	DIO_ErrorStatus LOC_enumState = DIO_OK ;
	
	return LOC_enumState ;	
	
}









