/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:29:02 by ppiirone          #+#    #+#             */
/*   Updated: 2022/04/21 16:29:03 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	read_arg_unsigned(t_struct *d, va_list ap)
{
	if (d->mod_l == 1)
		d->arg_o = (unsigned long)va_arg(ap, unsigned long);
	else if (d->mod_ll == 1)
		d->arg_o = (unsigned long long)va_arg(ap, unsigned long long);
	else if (d->mod_h == 1)
		d->arg_o = (unsigned short)va_arg(ap, unsigned int);
	else if (d->mod_hh == 1)
		d->arg_o = (unsigned char)va_arg(ap, unsigned int);
	else
		d->arg_o = (unsigned long long)va_arg(ap, unsigned int);
}

int	print_len_unsigned(t_struct *d, int len)
{
	// Count space for '0' if conversion type is 'o', argument value is non-zero
	// and there is '#' flag.
	if (d->hash == 1 && d->conv_o == 1 && d->arg_o != 0)
		len++;
	// If padding is longer than len, use it as len.
	if (d->padding > len)
		len = d->padding;
	// Count space for prefix if conversion type is 'x' or 'X',
	// result is non-zero and there is '#' flag. Or if conversion type is 'p'.
	if ((d->hash == 1 && (d->conv_x == 1 || d->conv_big_x == 1) && d->arg_o != 0) \
		|| d->conv_p == 1)
		len += 2;
	// If minimum field width is longer than len, use it as len.
	if (d->width > len)
		len = d->width;
	return (len);
}

void	plant_arg_unsigned(t_struct *d, char *print, char *input)
{
	while (d->input_len >= 0)
	{
		print[d->print_len] = input[d->input_len];
		d->input_len--;
		d->print_len--;
	}
	// Plant '0' for first digit if conversion type is 'o'
	// and there is '#' flag.
	if (d->hash == 1 && d->conv_o == 1)
	{
		print[d->print_len] = '0';
		d->print_len--;
	}
	// Run over padding before plant prefix.
	while (print[d->print_len] == '0')
		d->print_len--;
	// Make sure that there is space for prefix if necessary.
	if (d->print_len < 1)
		d->print_len = 1;
	// Plant prefix if conversion type is 'x' or 'X', result is non-zero
	// and there is '#' flag.  Or if conversion type is 'p'.
	if ((d->hash == 1 && (d->conv_x == 1 || d->conv_big_x == 1) && d->arg_o != 0) \
		|| d->conv_p == 1)
	{
		print[d->print_len] = 'X';
		d->print_len--;
		print[d->print_len] = '0';
		d->print_len--;
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
