#include "STD_TYPES.h" 
#include "BIT_MATH.h" 

#include "DIO_interface.h"

#include "SW_interface.h" 
#include "SW_private.h" 
#include "SW_config.h" 


void SW_voidInit   (SW_type SW_Config){
	
	DIO_enumSetPinDirection ( SW_Config.Port, SW_Config.Pin, DIO_INPUT );//Input Floating
	if(SW_Config.Pull_State == SW_PULL_UP){
		DIO_enumSetPinValue ( SW_Config.Port, SW_Config.Pin, DIO_HIGH ); //Input Pull up
		
	}
}

u8 SW_u8GetPressed (SW_type SW_Config){
	
	u8 LOC_u8Result = 0;
	DIO_enumGetPinValue (SW_Config.Port, SW_Config.Pin, &LOC_u8Result);
	
	return LOC_u8Result ;
}

