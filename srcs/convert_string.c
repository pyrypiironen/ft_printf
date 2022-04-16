/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:28:51 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/30 18:28:52 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	convert_string(va_list ap, t_struct *d)
{
	char *input;
	char *print;

	if (d->s_pad == -1)
		d->padding = -1;
	input = ft_strdup((char*)va_arg(ap, char*));
	if (input == NULL)
		input = ft_strdup("(null)");
	d->input_len = ft_strlen(input);
	print_len_str(d);
	print = (char *)malloc(sizeof(*print) * d->print_len + 1);
	if (print == NULL)
		exit(0);
	print[d->print_len] = '\0';
	fill_print_str(d, print, input);
	adjust_left(d, print);
	ft_putstr(print);
	d->res += ft_strlen(print); 
	free(input);
	free(print);
}


void	fill_print_str(t_struct *d, char *print, char *input)
{
	// If precision is specified and is less than the length of the string,
	// it defines maximum number of characters to print.
	if (d->padding >= 0 && d->padding < d->input_len)
		input[d->padding] = '\0';
	d->input_len = ft_strlen(input);
	// Plant modified input string to right side of string to be printed.
	while (d->print_len >= 0 && d->input_len >= 0)
	{
		print[d->print_len] = input[d->input_len];
		d->print_len--;
		d->input_len--;
	}
	// Fill the rest with spaces.
	while (d->print_len >= 0)
	{
		print[d->print_len] = ' ';
		d->print_len--;
	}
}

void	print_len_str(t_struct *d)
{
	d->print_len = d->input_len;
	// If precision is specified and is less than the length of the string,
	// it defines maximum number of characters to print.
	if (d->padding >= 0 && d->padding < d->print_len)
		d->print_len = d->padding;
	// If minimum field width is specified and is more than number of 
	// characters to print, the output string is lengt of minimum field width.
	if (d->width > d->print_len)
		d->print_len = d->width;
}
