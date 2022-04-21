/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_conversion.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:35:31 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/20 16:35:33 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	conversion(const char *format, va_list ap, t_struct *d) //26 lines
{
	if (format[d->pos] == 'd' || format[d->pos] == 'i')
		convert_int(ap, d);
	else if (format[d->pos] == 'o')
		convert_octal(ap, d);
	else if (format[d->pos] == 'u')
		convert_unsigned_int(ap, d);
	else if (format[d->pos] == 'x' || format[d->pos] == 'X')
	{
		if (format[d->pos] == 'x')
			d->conv_x = 1;
		else if (format[d->pos] == 'X')
			d->conv_X = 1;
		convert_hexadecimal(ap, d);
	}
	else if (format[d->pos] == 'c')
		convert_char(ap, d);
	else if (format[d->pos] == 's')
		convert_string(ap, d);
	else if (format[d->pos] == '%')
		convert_modulo(d);
	else if (format[d->pos] == 'p')
		convert_pointer(ap, d);
	else if (format[d->pos] == 'f' || format[d->pos] == 'F')
		convert_double(ap, d);
	if (format[d->pos] == 'b')
		convert_binary(format, ap, d);
}
