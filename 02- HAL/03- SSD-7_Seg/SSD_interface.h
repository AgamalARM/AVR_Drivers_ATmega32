#ifndef SSD_INTERFAC_H
#define SSD_INTERFAC_H

#define SSD_COMMON_CATHODE  0
#define SSD_COMMON_ANODE    1

typedef struct{
	u8 Type       ;
	u8 DataPort   ;
	u8 EnablePort ;
	u8 EnablePin  ;
	
}SSD_Type ;

void SSD_voidInit       ( SSD_Type Copy_StructConfig )                  ;
void SSD_voidSendNumber ( SSD_Type Copy_StructConfig, u8 Copy_u8Number) ;
void SSD_voidEnable     ( SSD_Type Copy_StructConfig )                  ;
void SSD_voidDisable    ( SSD_Type Copy_StructConfig )                  ;


#endif