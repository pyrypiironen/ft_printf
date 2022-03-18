#### HEADER


#include "../includes/ft_printf.h"

void    set_struct(t_struct *d)
{
    d->pos = 0;     // do not copy to reset
    d->hash = 0;
    d->zero = 0;
    d->plus = 0;
    d->minus = 0;
    d->space = 0;
    d->mod_h = 0;
    d->mod_hh = 0;
    d->mod_l = 0;
    d->mod_ll = 0;
    d->mod_L = 0;
}

void    reset_struct(t_struct *d)
{
    
}