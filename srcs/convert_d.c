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

void	convert_di(const char *format, va_list ap, t_struct *d)
{
	char		*input;
	char		*print;
	size_t		i;
	long long	arg;

	(void)format;
	i = 0;
	arg = (long long)va_arg(ap, int);
	input = ft_itoa(arg); 		//itoa allocates memory.
	d->input_len = ft_strlen(input);
	d->print_len = print_len(d, (int)d->input_len);
	print = (char *)malloc(sizeof(*print) * d->input_len + 1);
	if (print == NULL)
		exit(0);
	print[d->print_len] = '\0';
	fill_print(d, print);
	while (d->input_len >= 0)
	{
		print[d->print_len] = input[d->input_len];
		d->input_len--;
		d->print_len--;
	}
	//if	plus	add '+'
	//if	space	add ' '
	//if	zero	padding		--> zero and minus flags cant both be there
	//if	minus	move to left

	//precision

	//padding 5 and plus is wid-6
	//spaces 5 and plus is wid-5
	//--> plus can override space, but not padding

	//what about minus and padding?
	
}

size_t	print_len(t_struct *d, int len)
{
	int	flag;

	flag = 0;
	if (d->plus == 1 || d->space == 1)
	{
		flag = 1;
		len++;
	}
	if (d->width > len)
		len = d->width;
	if (d->padding + flag > len)
		len = d->padding;
	return (size_t)(len);
	//wid (plus and space override the block)
	//padding + plus or space
	//len + plus or space
	//longest is width we need to print
}

void	fill_print(t_struct *d, char *print)
{
	size_t	i;
	size_t	j;

	i = d->width - 1;
	j = d->print_len - 1;
	while (i >= 0 )
	{
		print[j] = ' ';
		i--;
		j--;
	}
	i = d->width - 1;
	j = d->print_len - 1;
	while (i >= 0 )
	{
		print[j] = '0';
		i--;
		j--;
	}
}



