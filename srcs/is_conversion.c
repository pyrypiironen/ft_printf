### HEADER


#include "../includes/ft_printf.h"

int is_conversion(const char *format, t_struct d)
{
    int save;

    save = d->pos;
    while (ft_strchr(SPECIFIERS, format[d->pos]) != NULL)
        d->pos++
    if (ft_strchr(CONVERSION, format[d->pos]) != NULL)
        return (1);
    else
    (
        d->pos = save;
        return (0);
    )
}