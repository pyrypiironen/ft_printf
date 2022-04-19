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

static void	rounders(t_struct *d);
static char	*fractional_part(long double n, int precision, t_struct *d);

char	*pf_dtoa(int precision, t_struct *d)
{
	int					i;
	char				arr[24];
	unsigned long long	k;
	char				*integral;
	char				*fractional;

	rounders(d);
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
	return (ft_strjoin(integral, fractional));
	// THERE IS MEMORY LEAK NOW
}

static char	*fractional_part(long double n, int precision, t_struct *d)
{
	char		arr[precision + 2];
	int			i;
	long long	k;

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

// static void	check_fractional(char *fractional)
// {
// 	int	i;

// 	i = 0;
// 	if (fractional[0] != '(' && fractional[0] != ')')
// 		return ;
// 	else
// 	{
// 		while (fractional[i] == '\0')
// 			{
// 				fractional[i] = '0';
// 				i++;
// 			}
// 	}
// }

static void	rounders(t_struct *d)
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
		alpha = fractional_part(nbr, 19, d);
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