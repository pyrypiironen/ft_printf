/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_o.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 14:48:28 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/28 14:48:29 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	convert_o(va_list ap, t_struct *d)
{
	char		*input;
	char		*print;

	d->conv_o = 1;
	read_arg_unsigned(d, ap);
	input = ft_itoa_base(d->arg_o, 8);
	d->input_len = ft_strlen(input);
	d->print_len = print_len_unsigned(d, d->input_len);
	print = (char *)malloc(sizeof(*print) * d->print_len + 1);
	if (print == NULL)
		exit(0);
	print[d->print_len] = '\0';
	fill_print(d, print);
	plant_arg_unsigned(d, print, input);
	zero_precision_check_unsigned(print, d);
	adjust_left(d, print);
	ft_putstr(print);
	d->res += ft_strlen(print); 
	free(input);
	free(print);
}

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

char	*ft_itoa_base(unsigned long long n, int base)
{
	int		i;
	char	arr[26];
	char	*hexa;

	i = 0;
	hexa = ft_strdup("0123456789ABCDEF");
	ft_bzero(arr, 26);
	if (n == 0)
	{
		free(hexa);
		return (ft_strdup("0"));
	}
	while (n > 0)
	{
		arr[i] = hexa[n % base];
		i++;
		n = n / base;
	}
	free(hexa);
	return (ft_strduprev(arr));
}

int	print_len_unsigned(t_struct *d, int len)
{
	// Count space for '0' if conversion type is 'o', argument value is non-zero
	// and there is '#' flag.
	if (d->hash == 1 && d->conv_o == 1 && d->arg_o != 0)//hox
		len++;
	// If padding is longer than len, use it as len.
	if (d->padding > len)
		len = d->padding;
	// Count space for prefix if conversion type is 'x' or 'X',
	// result is non-zero and there is '#' flag.
	if (d->hash == 1 && (d->conv_x == 1 || d->conv_X == 1) && d->arg_o != 0)
		len += 2;
	// If minimum field width is longer than len, use it as len.
	if (d->width > len)
		len = d->width;
	return (len);
}

void	plant_arg_unsigned(t_struct *d, char *print, char  *input)
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
	// and there is '#' flag.
	if (d->hash == 1 && (d->conv_x == 1 || d->conv_X == 1) && d->arg_o != 0)
	{
		print[d->print_len] = 'X';
		d->print_len--;
		print[d->print_len] = '0';
		d->print_len--;
	}
}
