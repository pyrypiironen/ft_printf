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

void read_arg_double(t_struct *d, va_list ap)
{
	if (d->mod_L == 1)
		d->arg_f = (long double)va_arg(ap, long double);
	else
		d->arg_f = (double)va_arg(ap, double);
	// If argument value is negative the information will be saved to d->s_pad,
	// because otherwise values -0 and 0 can't be distinguish later.
	if (is_negative(d->arg_f) == 1)
		d->s_pad = -1;
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
	if (d->s_pad == -1)
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

void	rounders(t_struct *d)
{
	long double	rounding;
	char		*alpha;//not memory allocated
	int			i;
	
	i = 0;
	alpha = fractional_part(d->arg_f, 19, d);
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