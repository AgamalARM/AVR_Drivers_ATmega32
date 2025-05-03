#include "STD_TYPES.h" 
#include "BIT_MATH.h" 

#include "DIO_interface.h"

#include "SSD_interface.h" 
#include "SSD_private.h" 
#include "SSD_config.h" 

const u8 SSD_u8Numbers[10] = {};
void SSD_voidSendNumber ( SSD_Type Copy_StructConfig, u8 Copy_u8Number){
	if( Copy_StructConfig.Type == SSD_COMMON_CATHODE){
		DIO_enumSetPortVale (Copy_StructConfig.DataPort, SSD_u8Numbers[Copy_u8Number]) ;
	}else if( Copy_StructConfig.Type == SSD_COMMON_ANODE){
		
	}
}
void SSD_voidEnable     ( SSD_Type Copy_StructConfig )                  ;
void SSD_voidDisable    ( SSD_Type Copy_StructConfig )                  ;


