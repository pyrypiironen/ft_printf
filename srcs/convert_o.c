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
	(void)ap;
	(void)d;
}

int	itobase(int i)
{
	int	remainder;
	int factor;
	int	res;

	factor = 1;
	res = 0;
	while (i != 0)
	{
		remainder = i % 8;
		if (remainder > 0)
			res += factor * remainder;
		factor = factor * 10;
		i = i / 8;
	}
	return (res);
}

