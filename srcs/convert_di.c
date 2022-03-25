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
#include <stdio.h>	//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

void	convert_di(const char *format, va_list ap, t_struct *d)
{
	char		*input;
	char		*print;
	int			i;

	(void)format;
	i = 0;
	d->arg = (long long)va_arg(ap, int);
	input = ft_itoa(d->arg); 		//itoa allocates memory.
	d->input_len = ft_strlen(input);
	d->print_len = print_len(d, d->input_len);
	print = (char *)malloc(sizeof(*print) * d->print_len + 1);
	if (print == NULL)
		exit(0);
	print[d->print_len] = '\0';
	fill_print(d, print);
	while (d->input_len >= 0 && input[d->input_len] != '-')
	{
		print[d->print_len] = input[d->input_len];
		d->input_len--;
		d->print_len--;
	}
	plant_plus_space(d, print);
	//adjust_left(d, print);
	//if	zero	padding		--> zero and minus flags cant both be there
	//if	minus	move to left



	//what about minus and padding?
	ft_putstr(print);
}

int	print_len(t_struct *d, int len)
{
	int	flag;

	flag = 0;
	if ((d->plus == 1 || d->space == 1) && d->arg >= 0)
	{
		flag = 1;
		len++;
	}
	if (d->width > len)
		len = d->width;
	if (d->padding + flag > len)
		len = d->padding + flag;
	return (len);
	//wid (plus and space override the block)
	//padding + plus or space
	//len + plus or space
	//longest is width we need to print
}

void	fill_print(t_struct *d, char *print)
{
	int	i;
	int	j;

	i = d->width - 1;
	j = d->print_len - 1;
	while (i >= 0 )
	{
		if(d->padding == -1 && d->zero == 1)
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

void	plant_plus_space(t_struct *d, char *print)
{
	int	i;
	//plus
	i = d->print_len;
	if (d->plus == 1 && d->arg >= 0)
	{
		while(print[i] == '0')
			i--;
		print[i] = '+';
	}
	//space
	else if (d->space == 1)
	{
		while(print[i] == '0')
			i--;
		print[i] = ' ';
	}
	//minus
	i = d->print_len;
	while (print[i] != ' ')
		i--;
	if (d->arg < 0)
	print[i] = '-';
}







