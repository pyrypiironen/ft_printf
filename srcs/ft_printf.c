/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:24:13 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/07 15:24:15 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list		ap;
	t_struct	*data;
	int			ret;

	//if *format is NULL >> return something
	d = (t_data)malloc(sizeof(d_data));
	if (d == NULL)
		return (0);	//check if this is right error code or not
	// bzero every value of struct ??
	va_start(ap, format);
	ret = //action happens here
	va_end(ap);
	//write here or inside the function?
	//free what must to be freed
	return (ret);
}

int second(const char *format, va_list ap, t_struct data)
{
	while (format[pos] != '\0') //set pos to 0
	{
		if not % >> write
		else if %
			check next
			if FLAG //ft_strchr?
			if not-FLAG
			if '\0'

	}
}