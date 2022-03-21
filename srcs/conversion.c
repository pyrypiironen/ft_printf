/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:35:49 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/20 16:35:51 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	conversion(const char *format, va_list ap, t_struct *d)
{
	if (format[d->pos] == 'd' || format[d->pos] == 'i')
		convert_di(format, ap, d);
	// else if (format[d->pos] == 'o')
	// 	convert_o(format, ap,  d);
	// else if (format[d->pos] == 'u')
	// 	convert_u(format, ap, d);
	// else if (format[d->pos] == 'x' || format[d->pos] == 'X')
	// 	convert_x(format, ap, d);
	// else if (format[d->pos] == 'c')
	// 	convert_c(format, ap, d);
	// else if (format[d->pos] == 's')
	// 	convert_s(format, ap, d);
	// else if (format[d->pos] == 'f' || format[d->pos] == 'F')
	// 	convert_f(format, ap, d);
	d->pos++;		// ??
}