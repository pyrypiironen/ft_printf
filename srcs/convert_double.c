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
	input = ft_dtoa(d->padding, d);
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

char	*ft_dtoa(int precision, t_struct *d)
{
	int			i;
	char		arr[24];//pituus
	long long	k;
	char		*integral;
	char		*fractional;

	//integral = ft_itoa(nbr);
	i = 0;
	k = (long long)d->arg_f;
	ft_bzero(arr, 24);
	if (d->arg_f < 0)
		k = k * -1;
	arr[i] = k % 10 + '0';
	i++;
	while (k / 10 > 0)
	{
		k = k / 10;
		arr[i] = k % 10 + '0';
		i++;
	}
	//
	if (is_negative((d->arg_f) == 1)) //								 EI TOIMI
		arr[i] = '-';
	//
	printf("arr is %s\n", arr);
	integral = ft_strduprev(arr);
	fractional = fractional_toa(d->arg_f, precision, d);
	return (ft_strjoin(integral, fractional));
	// there is memory leak now!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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
	//ft_bzero(arr, precision + 2);
	i = 0;
	//
	n -= (long long)n;
	//
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
	i++;
	arr[i] = '\0';
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
	long double	nbr;
	long double	rounding;
	int			i;
	i = 0;
	
	// check bankers
		//long double	nbr;
		char		*alpha;
		nbr = d->arg_f;
		//nbr -= (long long)nbr;
		//if (precision != 0)
		alpha = fractional_toa(nbr, 19, d);
		//printf("alpha : %s\n", alpha);
		if (alpha != '\0')
			i = ft_strlen(alpha) - 1;
		while (alpha[i] == '9')
			i--;
		if (alpha[i] == '4' && alpha[i - 1] == '4' && i == d->padding + 1) 
			return ;
		i = ft_strlen(alpha) - 1;
		while (alpha[i] == '0')
			i--;
		if (alpha[i] == '5' && alpha[i - 1] == '.' && i == d->padding + 1) 
			return ;
		
	//
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

int	is_negative(double nbr)
{
	unsigned long long	*ull;
	int					sign;
	double				zero;

	if (nbr > 0)
		return (0);
	if (nbr < 0)
		return (1);
	zero = nbr;
	ull = (unsigned long long*)&zero;
	sign = (int)(*ull >> 63);
	if (sign == 0)
		return (0);
	return (1);
	
}