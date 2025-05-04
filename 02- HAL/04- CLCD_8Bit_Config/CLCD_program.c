#include <util/delay.h>
#include "STD_TYPES.h" 
#include "BIT_MATH.h" 

#include "DIO_interface.h"

#include "CLCD_interface.h" 
#include "CLCD_private.h" 
#include "CLCD_config.h" 


void CLCD_voidInit        ( void ){
	
	DIO_enumSetPortDirection( CLCD_DATA_PORT    ,255                 );
	DIO_enumSetPinDirection ( CLCD_CONTROL_PORT ,CLCD_RS , DIO_OUTPUT); 
	DIO_enumSetPinDirection ( CLCD_CONTROL_PORT ,CLCD_RW , DIO_OUTPUT); 
	DIO_enumSetPinDirection ( CLCD_CONTROL_PORT ,CLCD_EN , DIO_OUTPUT);
	_delay_ms(50);
	// 8_bit configuration from LCD Datasheet page 13
	CLCD_voidSendCommend( 0b00111100 );    // Function Set
	_delay_ms(1);
	CLCD_voidSendCommend( 0b00001100 );     // Display ON OFF - Cursor off
	_delay_ms(1);
	CLCD_voidSendCommend( 0b00000001 );     // Display Clear
	_delay_ms(2);
	CLCD_voidSendCommend( 0b00000110 );     // Entry Mode - shift disable
	_delay_ms(1);
}
void CLCD_voidSendData    ( u8 Copy_u8Data     ){
	
	DIO_enumSetPortValue( CLCD_DATA_PORT    ,Copy_u8Data       );
	DIO_enumSetPinValue ( CLCD_CONTROL_PORT ,CLCD_RS , DIO_HIGH); //send data
	DIO_enumSetPinValue ( CLCD_CONTROL_PORT ,CLCD_RW , DIO_LOW ); //write
	//Enable Pulse ==>> Falling Edge
	DIO_enumSetPinValue ( CLCD_CONTROL_PORT ,CLCD_EN , DIO_HIGH);
	_delay_ms(1);
	DIO_enumSetPinValue ( CLCD_CONTROL_PORT ,CLCD_EN , DIO_LOW);
	_delay_ms(1);
	
	
	
}
void CLCD_voidSendCommend ( u8 Copy_u8Commend  ){
	
	DIO_enumSetPortValue( CLCD_DATA_PORT    ,Copy_u8Commend    );
	DIO_enumSetPinValue ( CLCD_CONTROL_PORT ,CLCD_RS , DIO_LOW); //send Commend
	DIO_enumSetPinValue ( CLCD_CONTROL_PORT ,CLCD_RW , DIO_LOW ); //write
	//Enable Pulse ==>> Falling Edge
	DIO_enumSetPinValue ( CLCD_CONTROL_PORT ,CLCD_EN , DIO_HIGH);
	_delay_ms(1);
	DIO_enumSetPinValue ( CLCD_CONTROL_PORT ,CLCD_EN , DIO_LOW);
	_delay_ms(1);
	
}