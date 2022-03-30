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

void	convert_x(va_list ap, t_struct *d)
{
	char		*input;
	char		*print;

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

