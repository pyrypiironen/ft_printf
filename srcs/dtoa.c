/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_dtoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 12:49:52 by ppiirone          #+#    #+#             */
/*   Updated: 2022/04/19 12:49:54 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*dtoa(int precision, t_struct *d)
{
	int					i;
	char				arr[24];
	unsigned long long	k;
	char				*integral;
	char				*fractional;

	i = 0;
	k = (unsigned long long)d->arg_f;
	ft_bzero(arr, 24);
	if (d->s_pad == -1)
		k = k * -1;
	arr[i] = k % 10 + '0';
	i++;
	while (k / 10 > 0)
	{
		k = k / 10;
		arr[i] = k % 10 + '0';
		i++;
	}
	if (d->s_pad == -1)
		arr[i] = '-';
	integral = ft_strduprev(arr);
	fractional = fractional_part(d->arg_f, precision, d);
	check_fractional(fractional);
	return (ft_strjoin_free(integral, fractional));
	// THERE IS MEMORY LEAK NOW
}

char	*fractional_part(long double n, int precision, t_struct *d)
{
	char				arr[precision + 2];
	int					i;
	long long			k;

	if (precision == 0 && d->hash == 1)
		return (ft_strdup("."));
	if (precision == 0)
		return NULL;
	i = 0;
	// Convert double value under one to fix rounding match up real printf.
	n -= (long long)n;
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
		if (precision > 19)
			arr[i] = '0';
		else
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

void	check_fractional(char *fractional)
{
	int	i;
	int len;

	i = 1;
	if (fractional == NULL)
		return ;
	len = ft_strlen(fractional);
	if (fractional[1] >= '0' && fractional[1] <= '9')
		return ;
	else
	{
		while (i < len)
			{
				fractional[i] = '0';
				i++;
			}
	}
}
