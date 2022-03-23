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

int is_conversion(const char *format, t_struct *d)
{
	int save;

	save = d->pos;
	while (ft_strchr(SPECIFIERS, format[d->pos]) != NULL)
		d->pos++;
	if (ft_strchr(CONVERSION, format[d->pos]) != NULL)
	{
		d->pos = save;
		return (1);
	}
	else
		return (0);
}
