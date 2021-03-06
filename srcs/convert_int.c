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

void	convert_int(va_list ap, t_struct *d)
{
	char		*input;
	char		*print;

	read_arg(d, ap);
	input = ft_itoa(d->arg);
	d->input_len = ft_strlen(input);
	d->print_len = print_len(d);
	print = (char *)malloc(sizeof(*print) * d->print_len + 1);
	if (print == NULL)
		exit(-1);
	print[d->print_len] = '\0';
	fill_print(d, print);
	plant_arg(d, print, input);
	zero_precision_check(d, print);
	adjust_left(d, print);
	add_to_print(print, d);
	d->res += ft_strlen(print);
	free(input);
	free(print);
}

int	print_len(t_struct *d)
{
	int	len;
	int	flag;

	len = d->input_len;
	flag = 0;
	// Count space for '+' or ' ' flag if argument is non-negative.
	// Also benchmark it by change int flag to 1.
	if ((d->plus == 1 || d->space == 1) && d->arg >= 0)
	{
		flag = 1;
		len++;
	}
	// If minimum field width is specified and is longer than len, use it
	// as len. In this case '+' and ' ' flags don't need extra space.
	if (d->width > len)
		len = d->width;
	// If padding (precision) is longer (with one extra box for '+' or
	// ' ' flag if necessary) than len, use it as len.
	if (d->padding + flag > len)
		len = d->padding + flag;
	// If padding (precision) fills the whole string and argument is negative,
	// count space for minus sign.
	if (d->padding >= d->width && d->padding >= d->input_len && d->arg < 0)
		len++;
	return (len);
}

void	plant_arg(t_struct *d, char *print, char *input)
{
	int	i;

	// Plant argument. If argument value is negative, plant it without minus.
	while (d->input_len >= 0 && input[d->input_len] != '-')
		print[d->print_len--] = input[d->input_len--];
	// Plant plus if there is '+' flag and argument is non-negative.
	i = d->print_len;
	if (d->plus == 1 && d->arg >= 0)
	{
		while (print[i] == '0' && i > 0)
			i--;
		print[i] = '+';
	}
	// Plant space if there is ' ' flag.
	else if (d->space == 1)
	{
		while (print[i] == '0' && i > 0)
			i--;
		print[i] = ' ';
	}
	// Plant minus if argument value is negative.
	i = d->print_len;
	while (print[i] != ' ' && i > 0)
		i--;
	if (d->arg < 0)
		print[i] = '-';
}

void	read_arg(t_struct *d, va_list ap)
{
	if (d->mod_l == 1)
		d->arg = (long)va_arg(ap, long);
	else if (d->mod_ll == 1)
		d->arg = (long long)va_arg(ap, long long);
	else if (d->mod_h == 1)
		d->arg = (short)va_arg(ap, int);
	else if (d->mod_hh == 1)
		d->arg = (signed char)va_arg(ap, int);
	else
		d->arg = (int)va_arg(ap, int);
}

void	zero_precision_check(t_struct *d, char *print)
{
	int	i;

	i = 0;
	// If precision is zero and argument value is zero there is no
	// visible print for argument value.
	if (d->padding != 0 || d->arg != 0)
		return ;
	while (i < d->width)
	{
		print[i] = ' ';
		i++;
	}
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
