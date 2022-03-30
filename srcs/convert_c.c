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
	adjust_left(d, print);
	ft_putstr(print);
	d->res += ft_strlen(print); 
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