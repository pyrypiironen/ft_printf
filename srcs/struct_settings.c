/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_settings.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:35:12 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/20 16:35:14 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	set_struct(t_struct *d)
{
	d->conv_o = 0;
	d->conv_x = 0;
	d->conv_X = 0;
	d->pos = 0;     // do not copy to reset
	d->hash = 0;
	d->zero = 0;
	d->plus = 0;
	d->minus = 0;
	d->space = 0;
	d->width = 0;
	d->padding = -1;	// -1 is default because zero is significant
	d->mod_h = 0;
	d->mod_hh = 0;
	d->mod_l = 0;
	d->mod_ll = 0;
	d->mod_L = 0;
	d->res = 0;		// do not copy to reset
}

void	reset_struct(t_struct *d)
{
	d->conv_o = 0;
	d->conv_x = 0;
	d->conv_X = 0;
	d->hash = 0;
	d->zero = 0;
	d->plus = 0;
	d->minus = 0;
	d->space = 0;
	d->width = 0;
	d->padding = -1;
	d->mod_h = 0;
	d->mod_hh = 0;
	d->mod_l = 0;
	d->mod_ll = 0;
	d->mod_L = 0;
}
