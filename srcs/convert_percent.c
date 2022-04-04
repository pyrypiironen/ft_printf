/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_%.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:06:04 by ppiirone          #+#    #+#             */
/*   Updated: 2022/04/04 13:06:05 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	convert_percent(t_struct *d)
{
	char	*print;
	int	i;

	i = 0;
	d->print_len = 1;
	if (d->width > 1)
		d->print_len = d->width;
		print = (char *)malloc(sizeof(*print) * d->print_len + 1);
	if (print == NULL)
		exit(0);
	print[d->print_len] = '\0';
	while (i < d->width)
	{
		print[i] = ' ';
		i++;
	}
	if (d->minus == 0)
		print[d->print_len - 1] = '%';
	else
		print[0] = '%';
	ft_putstr(print);
	d->res += ft_strlen(print); 
	free(print);
}
