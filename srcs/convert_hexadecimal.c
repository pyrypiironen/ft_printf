/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_xX..c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:13:07 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/30 13:13:08 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	convert_hexadecimal(va_list ap, t_struct *d)
{
	char		*input;
	char		*print;

	print_it(d);
	read_arg_unsigned(d, ap);
	input = ft_itoa_base(d->arg_o, 16);
	d->input_len = ft_strlen(input);
	d->print_len = print_len_unsigned(d, d->input_len);
	print = (char *)malloc(sizeof(*print) * d->print_len + 1);
	if (print == NULL)
		exit(0);
	print[d->print_len] = '\0';
	fill_print(d, print);
	plant_arg_unsigned(d, print, input);
	adjust_left(d, print);
	if (d->conv_x == 1)
		to_lowercase(print);
	zero_precision_check_unsigned(print, d);
	ft_putstr(print);
	d->res += ft_strlen(print);
	free(input);
	free(print);
}

void	to_lowercase(char *print)
{
	int	i;

	i = 0;
	while (print[i] != '\0')
	{
		print[i] = ft_tolower(print[i]);
		i++;
	}
}

void	zero_precision_check_unsigned(char *print, t_struct *d)
{
	int	i;

	i = 0;
	// If precision is zero and argument value is zero there is no
	// visible print for argument value.
	if (d->padding != 0 || d->arg_o != 0)
		return ;
	while (i < d->width)
	{
		print[i] = ' ';
		i++;
	}
	//
	if (d->conv_p == 1 && i < 2)
		i = 2;
	print[i] = '\0';
	// Make sure that there is space for '0' if necessary.
	if (d->width == 0)
		i = 1;
	// If conversion type is 'o' and there is '#' flag print '0' for the flag.
	if (d->conv_o == 1 && d->hash == 1)
	{
		print[i - 1] = '0';
		print[i] = '\0';
	}
}