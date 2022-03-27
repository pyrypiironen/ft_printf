/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:57:04 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/20 14:57:07 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	flags(const char *format, t_struct *d)
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
	if (d->plus == 1)
		d->space = 0;
	if (d->minus == 1 && d->zero == 1)
	{
		ft_putendl("error: flag '0' is ignored when flag '-' is present");
		exit (-1);
	}
}
