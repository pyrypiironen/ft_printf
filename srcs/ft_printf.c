/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:24:13 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/07 15:24:15 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_struct	*data;
	int			ret;

	//if *format is NULL >> return something
	data = (t_struct*)malloc(sizeof(t_struct));
	if (data == NULL)
		return (0);
	set_struct(data);
	va_start(ap, format);
	ret = read_format(format, ap, data);
	va_end(ap);
	//free what must to be freed
	return (ret);
}

int read_format(const char *format, va_list ap, t_struct *d)
{
	while (format[d->pos] != '\0')
	{
		if (format[d->pos] != '%')
		{
			write(1, &format[d->pos], 1);
			d->res++;
		}
		else // == '%'
		{
			d->pos++;
			if (is_conversion(format, d) == 1)
			{
				// check_flag_errors(d);
				flags(format, d);
				width(format, ap, d);
				precision(format, ap, d);
				modifiers(format, d);
				conversion(format, ap, d);
			}
			else
				d->pos--;
		}
		d->pos++;
		reset_struct(d);
	}
	return (d->res);
}