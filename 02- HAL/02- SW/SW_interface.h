#ifndef SW_INTERFAC_H
#define SW_INTERFAC_H

#define SW_FLOATING  0
#define SW_PULL_UP   1

typedef struct{
	u8 Port       ;
	u8 Pin        ;
	u8 Pull_State ;
	
}SW_type;

void SW_voidInit   (SW_type SW_Config);
u8 SW_u8GetPressed (SW_type SW_Config);


#endif