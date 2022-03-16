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

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_struct	*data;
	int			ret;

	//if *format is NULL >> return something
	d = (t_data)malloc(sizeof(d_data));
	if (d == NULL)
		return (0);
	set_struct(d);
	va_start(ap, format);
	ret = //action happens here
	va_end(ap);
	//free what must to be freed
	return (ret);
}

int second(const char *format, va_list ap, t_struct data)
{
	while (format[d->pos] != '\0')
	{
		if (format[d->pos] != '%')
			write(1, &format[d->pos], 1);
		else // == '%'
		{
			d->pos++;
			flags(format, data);
			min_width(format, data);
			presicion(format, data);
			modifiers(format, data);
			conversion(format, ap, data);

		}

		d->pos++;
	}
}