//### HEADER


#include "../includes/ft_printf.h"

void    flags(const char *format, t_struct data)
{   
    while (ft_strchr(FLAGS, format[d->pos]) != NULL)
    {
        if (format[d->pos] == '#')
            d->hash = 1;
        else if (format[d->pos] == '0')
            d->zero = 1;
        else if (format[d->pos] == '-')
            d->minus = 1;
        else if (format[d->pos] == '+')
            d->plus = 1;
        else if (format[d->pos] == ' ')
            d->space = 1;
        d->pos++;
    }
    if (f->minus == 1 || f->plus == 1)
        f->space = 0;
}