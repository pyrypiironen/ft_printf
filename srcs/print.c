/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:58:46 by ppiirone          #+#    #+#             */
/*   Updated: 2022/04/20 14:58:48 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	add_to_print(char *print, t_struct *d)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(print);
	if (d->ppos + len >= 420)
	{
		write(1, &d->print, d->ppos);
		d->ppos = 0;
	}
	while (i < len)
	{
		d->print[d->ppos] = print[i];
		d->ppos++;
		i++;
	}
}

void	print_it(t_struct *d)
{
	if (d->green || d->red || d->black || d->yellow || d->blue || d->purple \
		|| d->blue2)
	{
		set_color_start(d);
		set_color_end(d);
		d->ppos += 11;
	}
	write(1, &d->print, d->ppos);
	d->ppos = 0;
}
