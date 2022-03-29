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
#include <stdio.h> //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

void	convert_di(va_list ap, t_struct *d)
{
	char		*input;
	char		*print;
	int			i;

	i = 0;
	read_arg(d, ap);
	input = ft_itoa(d->arg);
	d->input_len = ft_strlen(input);
	d->print_len = print_len(d, d->input_len);
	print = (char *)malloc(sizeof(*print) * d->print_len + 1);
	if (print == NULL)
		exit(0);
	print[d->print_len] = '\0';
	fill_print(d, print);
	plant_arg(d, print, input);
	adjust_left(d, print);
	ft_putstr(print);
	d->res += ft_strlen(print); 
	free(input);
	free(print);
}

int	print_len(t_struct *d, int len)
{
	int	flag;

	flag = 0;
	// plus or space with non-negative number needs one more block
	if ((d->plus == 1 || d->space == 1) && d->arg >= 0)
	{
		flag = 1;
		len++;
	}
	// width (plus and space override the block)
	if (d->width > len)
		len = d->width;
	// padding plus one (to plus or space flag)
	if (d->padding + flag > len)
		len = d->padding + flag;
	// if padding fills the string, it needs one more block to minus when negative
	if (d->padding >= d->width && d->padding >= d->input_len && d->arg < 0)
		len++;
	// longest is width we need to allocate 
	return (len);
}

void	fill_print(t_struct *d, char *print)
{
	int	i;
	int	j;

	i = d->width - 1;
	j = d->print_len - 1;
	while (i >= 0 )
	{
		if(d->padding == -1 && d->zero == 1 && d->minus == 0)
			print[j] = '0';		//set flag 0
		else
			print[j] = ' ';
		i--;
		j--;
	}
	i = d->padding - 1;		//set padding
	j = d->print_len - 1;
	while (i >= 0 )
	{
		print[j] = '0';
		i--;
		j--;
	}
}

void	plant_arg(t_struct *d, char *print, char  *input)
{
	int	i;

	// arg (w/o minus if negative)
	while (d->input_len >= 0 && input[d->input_len] != '-')
	{
		print[d->print_len] = input[d->input_len];
		d->input_len--;
		d->print_len--;
	}
	// plus
	i = d->print_len;
	if (d->plus == 1 && d->arg >= 0)
	{
		while(print[i] == '0')
			i--;
		print[i] = '+';
	}
	// space
	else if (d->space == 1)
	{
		while(print[i] == '0')
			i--;
		print[i] = ' ';
	}
	// minus
	i = d->print_len;
	while (print[i] != ' ' && print[i] > 0)
		i--;
	if (d->arg < 0)
	print[i] = '-';
}

void	adjust_left(t_struct *d ,char *print)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	if (d->space == 1 && print[0] == ' ' && d->arg >= 0)
		j++;
	if (d->minus == 0)
		return ;
	while (1)
	{
		while (print[i] == ' ')
			i++;
		if (i == 0 + j)
			return ;
		while (print[i] != '\0')
		{
			print[i - 1] = print[i];
			print[i] = ' ';
			i++;
		}
		i = 0 + j;
	}
}

void	read_arg(t_struct *d, va_list ap)
{
	if (d->mod_l == 1)
		d->arg = (long long)va_arg(ap, long);
	else if (d->mod_ll == 1)
		d->arg = (long long)va_arg(ap, long long);
	else
		d->arg = (long long)va_arg(ap, int);
}







