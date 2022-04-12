/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 12:22:13 by ppiirone          #+#    #+#             */
/*   Updated: 2022/04/11 12:22:15 by ppiirone         ###   ########.fr       */
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
	input = ft_dtoa(d->arg_f, d->padding, d);
	//printf("input: %s\n", input);
	d->input_len = ft_strlen(input);
	d->print_len = print_len_double(d);
	print = (char *)malloc(sizeof(*print) * d->print_len + 1);
	if (print == NULL)
		exit(0);
	print[d->print_len] = '\0';
	fill_print_double(d, print);
	plant_arg_double(d, print, input);
	adjust_left(d, print);
	ft_putstr(print);
	d->res += ft_strlen(print); 
	free(input);
	free(print);

}

void read_arg_double(t_struct *d, va_list ap)
{
	if (d->mod_L == 1)
		d->arg_f = (long double)va_arg(ap, long double);
	else
		d->arg_f = (double)va_arg(ap, double);
}

char	*ft_dtoa(long double n, int precision, t_struct *d)
{
	int			i;
	char		arr[24];//pituus
	long long	k;
	char		*integral;
	char		*fractional;

	i = 0;
	k = (long long)n;
	ft_bzero(arr, 24);
	if (n < 0)
		k = k * -1;
	arr[i] = k % 10 + '0';
	i++;
	while (k / 10 > 0)
	{
		k = k / 10;
		arr[i] = k % 10 + '0';
		i++;
	}
	if (n < 0)
		arr[i] = '-';
	integral = ft_strduprev(arr);
	fractional = fractional_toa(n, precision, d);
	return (ft_strjoin(integral, fractional));
	// there is memory leak now
}

char	*fractional_toa(long double n, int precision, t_struct *d)
{
	char		arr[precision + 2];
	int			i;
	long long	k;

	if (precision == 0 && d->hash == 1)
		return (ft_strdup("."));
	if (precision == 0)
		return NULL;
	ft_bzero(arr, precision + 2);
	i = 0;
	while (i < precision)
	{
		n *= 10; 
		i++;
	}
	i = 0;
	while (precision > 0)
	{
		k = (long long)n;
		if (k < 0)
			k *= -1;
		arr[i] = k % 10 + '0';
		n /= 10;
		i++;
		precision--;
	}
	arr[i] = '.';
	return (ft_strduprev(arr));
}

int	print_len_double(t_struct *d)
{
	int	len;

	len = d->input_len;
	// Count space for '+' or ' ' flag if argument is non-negative.
	if ((d->plus == 1 || d->space == 1) && d->arg_f >= 0)
		len++;
	// If minimum field width is specified and is longer than len, use it
	// as len. In this case '+' and ' ' flags don't need extra space.
	if (d->width > len)
		len = d->width;
	return (len);
}

void	plant_arg_double(t_struct *d, char *print, char  *input)
{
	int	i;

	// Plant argument. If argument value is negative, plant it without minus.
	while (d->input_len >= 0 && input[d->input_len] != '-')
	{
		print[d->print_len] = input[d->input_len];
		d->input_len--;
		d->print_len--;
	}
	// Plant plus if there is '+' flag and argument is non-negative.
	i = d->print_len;
	if (d->plus == 1 && d->arg_f >= 0)
	{
		while(print[i] == '0' && i > 0)
			i--;
		print[i] = '+';
	}
	// Plant space if there is ' ' flag.
	else if (d->space == 1)
	{
		while(print[i] == '0' && i > 0)
			i--;
		print[i] = ' ';
	}
	// Plant minus if argument value is negative.
	i = d->print_len;
	while (print[i] != ' ' && i > 0)
		i--;
	if (d->arg_f < 0)
		print[i] = '-';
}

void	fill_print_double(t_struct *d, char *print)
{
	int	i;
	int	j;

	// String print will be filled by 0's if there is '0' flag,
	// but not '-' flag and precision is not specified.
	// Else it will be filled by spaces (' ').
	i = d->width - 1;
	j = d->print_len - 1;
	while (i >= 0 )
	{
		if(d->zero == 1 && d->minus == 0)
			print[j] = '0';
		else
			print[j] = ' ';
		i--;
		j--;
	}
}

void	rounders(t_struct *d)
{
	long double	rounding;
	int			i;

	if (d->mod_L == 1)
		return ;
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