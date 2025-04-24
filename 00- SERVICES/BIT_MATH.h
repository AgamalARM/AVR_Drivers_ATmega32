#ifndef BIT_MATH_H
#define BIT_MATH_H

#define SET_BIT(Reg,BitNo) Reg |= (1 << BitNo)
#define CLR_BIT(Reg,BitNo) Reg &= ~(1 << BitNo)
#define TOG_BIT(Reg,BitNo) Reg ^= (1 << BitNo)
#define GET_BIT(Reg,BitNo) (Reg >> BitNo) & 1

#define ROR(REG,NUM) (REG = ((REG >> NUM) | (REG << (8-NUM))))
#define ROL(REG,NUM) (REG = ((REG << NUM) | (REG >> (8-NUM))))
#define Bit_Is_Set(REG,BIT) (REG & (1<<BIT))
#define Bit_Is_Clear(REG,BIT) (!(REG & (1<<BIT)))




#endif