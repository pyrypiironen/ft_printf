/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:22:13 by ppiirone          #+#    #+#             */
/*   Updated: 2022/04/13 16:29:02 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	convert_double(va_list ap, t_struct *d)
{
	char		*input;
	char		*print;
	int			i;

	i = 0;
	if (d->padding == -1)
		d->padding = 6;
	read_arg_double(d, ap);
	rounders(d);
	input = dtoa(d->padding, d);
	d->input_len = ft_strlen(input);
	d->print_len = print_len_double(d);
	print = (char *)malloc(sizeof(*print) * d->print_len + 1);
	if (print == NULL)
		exit(0);
	print[d->print_len] = '\0';
	fill_print_double(d, print);
	plant_arg_double(d, print, input);
	adjust_left(d, print);
	add_to_print(print, d);
	d->res += ft_strlen(print);
	free(input);
	free(print);
}

void	rounders(t_struct *d)
{
	long double	rounding;
	char		*alpha;//not memory allocated
	int			i;

	i = 0;
	alpha = fractional_part(d->arg_f, 19, d);
	if (alpha != '\0')
		i = ft_strlen(alpha) - 1;
	// Bankers rounding.
	if ((long long)d->arg_f % 2 == 0)
	{
		while (alpha[i] == '9')
			i--;
		if (alpha[i] == '4' && alpha[i - 1] == '4' && i == d->padding + 1)
			return ;
		i = ft_strlen(alpha) - 1;
		while (alpha[i] == '0')
			i--;
		if (alpha[i] == '5' && alpha[i - 1] == '.' && i == d->padding + 1)
			return ;
	}
	rounding = 0.5;
	i = 0;
	if (d->arg_f < 0)
		rounding *= -1;
	while (i < d->padding)
	{
		rounding /= 10.0;
		i++;
	}
	d->arg_f += rounding;
}
