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
#include <stdio.h> //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

void	convert_o(va_list ap, t_struct *d)
{
	char		*input;
	char		*print;

	if (d->plus == 1 || d->space == 1)
	{
		ft_putendl("flags '+' and ' ' results undefined behavior w 'o' specif");
		exit(0);
	}
	read_arg_unsigned(d, ap);
	input = ft_itoa_base(d->arg_o, 8);
	d->input_len = ft_strlen(input);
	d->print_len = print_len_unsigned(d, d->input_len);
	print = (char *)malloc(sizeof(*print) * d->print_len + 1);
	if (print == NULL)
		exit(0);
	print[d->print_len] = '\0';
	fill_print(d, print);
	if (d->hash == 1 && d->minus == 0)
		print[0] = '0';
	plant_arg_unsigned(d, print, input);
	adjust_left(d, print);
	ft_putstr(print);
	d->res += ft_strlen(print); 
	free(input);
	free(print);
}

void	read_arg_unsigned(t_struct *d, va_list ap)
{
	if (d->mod_l == 1)
		d->arg_o = (unsigned long long)va_arg(ap, unsigned long);
	else if (d->mod_ll == 1)
		d->arg_o = (unsigned long long)va_arg(ap, unsigned long long);
	else
		d->arg_o = (unsigned long long)va_arg(ap, unsigned int);
}

char	*ft_itoa_base(unsigned long long n, int base)
{
	int		i;
	char	arr[26];

	i = 0;
	ft_bzero(arr, 26);
	if (n == 0)
		return (ft_strdup("0"));
	while (n > 0)
	{
		arr[i] = n % base + '0';
		i++;
		n = n / base;
	}
	return (ft_strduprev(arr));
}

int	print_len_unsigned(t_struct *d, int len)
{
	if (d->hash == 1)
		len++;
	if (d->width > len)
		len = d->width;
	if (d->padding > len)
		len = d->padding;
	// if (d->padding >= d->width && d->padding >= d->input_len && d->arg < 0)
	// 	len++;
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
	if (d->hash == 1)
	{
		print[d->print_len] = '0';
		d->print_len--;
	}
}
