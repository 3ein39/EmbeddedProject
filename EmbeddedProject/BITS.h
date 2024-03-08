#ifndef BITS_H
#define BITS_H

#define set_bit(reg , bit) (reg|=(1<<bit))
#define  get_bit(reg , bit) ((reg>>bit) &1)
#define  clr_bit(reg,bit) (reg&=~(1<<bit))
#define toggle_bit(reg , bit) (reg^=(1<<bit))

#endif 