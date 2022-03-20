/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   width.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:57:40 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/20 14:57:43 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	width(const char *format, t_struct *d)
{
	int		i;
	char	str[20];

	i = 0;
	while (ft_strchr("0123456789", format[d->pos]) != NULL)
	{
		str[i] = format[d->pos];
		i++;
		d->pos++;
	}
	str[i] = '\0';
	if (i > 0)
		d->width = ft_atoi(str);
}
