/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 15:22:35 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/20 15:22:37 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	precision(const char *format, t_struct *d)
{
	int		i;
	char	str[20];
	
	i = 0;
	if (format[d->pos] == '.')
	{
		d->pos++;
		while (ft_strchr("0123456789", format[d->pos]) != NULL)
		{
			str[i] = format[d->pos];
			i++;
			d->pos++;
		}
		str[i] = '\0';
		if (i > 0)
			d->padding = ft_atoi(str);
		else
			d->padding = 0;
	}
}
