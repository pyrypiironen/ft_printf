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
	input = ft_dtoa(d->arg_f, d->padding);
	ft_putstr(input);




}

void read_arg_double(t_struct *d, va_list ap)
{
	if (d->mod_L == 1)
		d->arg_f = (long double)va_arg(ap, long double);
	else
		d->arg_f = (double)va_arg(ap, double);
}

char	*ft_dtoa(long double n, size_t precision)
{
	int			i;
	char		arr[24];
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
	fractional = fractional_toa(n, precision);
	return (ft_strjoin(integral, fractional));
	// there is memory leak now
}

char	*fractional_toa(long double n, size_t precision)
{
	char		arr[42];
	int			i;
	long long	k;

	if (precision == 0)
		return NULL;
	ft_bzero(arr, 24);
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
		arr[i] = k % 10 + '0';
		n /= 10;
		i++;
		precision--;
	}
	arr[i] = '.';
	return (ft_strduprev(arr));
}
