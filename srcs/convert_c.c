/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_c.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:27:21 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/30 16:27:22 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	convert_c(va_list ap, t_struct *d)
{
	char		*print;

	d->arg_c = (char)va_arg(ap, int);
	d->print_len = 1;
	if (d->width > 1)
		d->print_len = d->width;
	print = (char *)malloc(sizeof(*print) * d->print_len + 1);
	if (print == NULL)
		exit(0);
	print[d->print_len] = '\0';
	fill_print_char(d, print);
	adjust_left_char(d, print);
	if (d->width == 0)
		d->width = 1;
	write(1, print, d->width);
	d->res += d->width; 
	free(print);
}

void	fill_print_char(t_struct *d, char *print)
{
	int	i;

	i = 0;
	while (d->print_len - 1 > 0)
	{
		print[i] = ' ';
		d->print_len--;
		i++;
	}
	print[i] = d->arg_c;
}

void	adjust_left_char(t_struct *d ,char *print)
{
	int	i;
	int j;
	int	k;

	i = 0;
	j = 0;
	k = d->width;
	if (d->minus == 0)
		return ;
	while (k > 0)
	{
		while (print[i] == ' ')
			i++;
		if (i == 0 + j)
			return ;
		while (print[i] != '\0')
		{
			print[i - 1] = print[i];
			print[i] = ' ';
			i++;
		}
		i = 0 + j;
		k--;
	}
}
