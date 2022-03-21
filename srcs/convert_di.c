/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_di.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:48:13 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/20 16:48:14 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	convert_di(const char *format, va_list ap, t_struct *d)
{
	if (d->mod_h == 1)
		convert_hd(format, ap, d);
	else if (d->mod_hh == 1)
		convert_hhd(format, ap, d);
	else if (d->mod_l == 1)
		convert_ld(format, ap, d);
	else if (d->mod_ll == 1)
		convert_lld(format, ap, d);
	else if (d->mod_L == 1)
	{
		ft_putendl("\n\nError: Invalid length modifier(L).");
		exit(0);
	}
	else
		convert_d(format, ap, d);
}

void	convert_d(const char *format, va_list ap, t_struct *d)
{
	char	*input;
	char	*print;
	int		print_len;
	int		input_len;

	input = ft_itoa(va_arg(ap, int)); //itoa allocates memory.
	input_len = ft_strlen(input);
	
	print_len = print_len(t_struct *d, int input_len);
	//wid (plus and space override the block)
	//padding + plus or space
	//len + plus or space
	//longest is width we need to print
	
	// input_len = len;
	// if(d->plus == 1 || d->space == 1)
	// 	len++;
	// if (d->width > len)
	// 	len = d->width;
	
	print = (char *)malloc(sizeof(*print) * len + 1);
	if (print == NULL)
		exit(0);
	print[len] = '\0';
	while (input_len >= 0)
	{
		print[len] = input[input_len];
		input_len;
		len--:
	}
	//if	plus	add '+'
	//if	space	add ' '
	//if	zero	padding		--> zero and minus flags cant both be there
	//if	minus	move to left

	//precision

	//padding 5 and plus is wid-6
	//spaces 5 and plus is wid-5
	//--> plus can override space, but not padding

	//what about minus and padding?
	
}
