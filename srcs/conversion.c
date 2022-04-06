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

void	conversion(const char *format, va_list ap, t_struct *d)
{
	(void)format;
	if (format[d->pos] == 'd' || format[d->pos] == 'i')
		convert_di(ap, d);
	else if (format[d->pos] == 'o')
		convert_o(ap,  d);
	else if (format[d->pos] == 'u')
		convert_u(ap, d);
	else if (format[d->pos] == 'x' || format[d->pos] == 'X')
	{
		if (format[d->pos] == 'x')
			d->conv_x = 1;
		else
			d->conv_X = 1;
		convert_x(ap, d);
	}
	else if (format[d->pos] == 'c')
		convert_c(ap, d);
	else if (format[d->pos] == 's')
		convert_s(ap, d);
	else if (format[d->pos] == '%')
		convert_modulo(d);
	else if (format[d->pos] == 'p')
		convert_p(ap, d);
	// else if (format[d->pos] == 'f' || format[d->pos] == 'F')
	// 	convert_f(ap, d);
}
