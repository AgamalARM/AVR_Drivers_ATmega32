#include "STD_TYPES.h" 
#include "BIT_MATH.h" 

#include "DIO_interface.h"

#include "SSD_interface.h" 
#include "SSD_private.h" 
#include "SSD_config.h" 

// Common Cathode 7-Seg
const u8 SSD_u8Numbers[10] = {0b00111111,0b00000110,0b01011011,0b01001111,0b01100110,0b01101101,0b01111101,0b01000111,0b01111111,0b01101111};
void SSD_voidInit (  SSD_Type Copy_StructConfig ){
	// Data Port Direction
	DIO_enumSetPortDirection ( Copy_StructConfig.DataPort, 255 );
	// Enable Pin Direction
	DIO_enumSetPinDirection ( Copy_StructConfig.EnablePort, Copy_StructConfig.EnablePin, DIO_OUTPUT );
}
void SSD_voidSendNumber ( SSD_Type Copy_StructConfig, u8 Copy_u8Number){
	if( Copy_StructConfig.Type == SSD_COMMON_CATHODE){
		DIO_enumSetPortVale (Copy_StructConfig.DataPort, SSD_u8Numbers[Copy_u8Number]) ;
	}else if( Copy_StructConfig.Type == SSD_COMMON_ANODE){
		DIO_enumSetPortVale (Copy_StructConfig.DataPort, ~(SSD_u8Numbers[Copy_u8Number])) ;
		
	}
}
void SSD_voidEnable     ( SSD_Type Copy_StructConfig ){
	if( Copy_StructConfig.Type == SSD_COMMON_CATHODE){
	    DIO_enumSetPinVale ( Copy_StructConfig.EnablePort, Copy_StructConfig.EnablePin, DIO_LOW );
	}else if( Copy_StructConfig.Type == SSD_COMMON_ANODE){
	    DIO_enumSetPinVale ( Copy_StructConfig.EnablePort, Copy_StructConfig.EnablePin, DIO_HIGH );
	}
	
}
void SSD_voidDisable    ( SSD_Type Copy_StructConfig ){
	if( Copy_StructConfig.Type == SSD_COMMON_CATHODE){
	    DIO_enumSetPinVale ( Copy_StructConfig.EnablePort, Copy_StructConfig.EnablePin, DIO_HIGH );
	}else if( Copy_StructConfig.Type == SSD_COMMON_ANODE){
	    DIO_enumSetPinVale ( Copy_StructConfig.EnablePort, Copy_StructConfig.EnablePin, DIO_LOW );
	}
}


