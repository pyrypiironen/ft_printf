/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_signed.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:47:49 by ppiirone          #+#    #+#             */
/*   Updated: 2022/04/21 16:47:50 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	fill_print(t_struct *d, char *print)
{
	int	i;
	int	j;

	// String print will be filled by 0's if there is '0' flag,
	// but not '-' flag and precision is not specified.
	// Else it will be filled by spaces (' ').
	i = d->width - 1;
	j = d->print_len - 1;
	while (i >= 0)
	{
		if (d->padding == -1 && d->zero == 1 && d->minus == 0)
			print[j] = '0';
		else
			print[j] = ' ';
		i--;
		j--;
	}
	// If precision is specified, string print is overwrite by defined
	// amount of 0's.
	i = d->padding - 1;
	j = d->print_len - 1;
	while (i >= 0)
	{
		print[j] = '0';
		i--;
		j--;
	}
}

void	adjust_left(t_struct *d, char *print)
{
	int	i;
	int j;
	int	k;

	i = 0;
	j = 0;
	k = ft_strlen(print);
	if (d->space == 1 && print[0] == ' ' && d->arg >= 0)
		j++;
	if (d->minus == 0)
		return ;
	while (k > 0)
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
		k--;
	}
}

void	to_lowercase(char *print)
{
	int	i;

	i = 0;
	while (print[i] != '\0')
	{
		print[i] = ft_tolower(print[i]);
		i++;
	}
}
