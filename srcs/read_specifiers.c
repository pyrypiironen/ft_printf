/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 14:57:04 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/20 14:57:07 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int is_conversion(const char *format, t_struct *d)
{
	int save;

	save = d->pos;
	while (ft_strchr(SPECIFIERS, format[d->pos]) != NULL)
		d->pos++;
	if (ft_strchr(CONVERSION, format[d->pos]) != NULL)
	{
		d->pos = save;
		return (1);
	}
	else
		return (0);
}

void	flags(const char *format, t_struct *d)
{
	while (ft_strchr(FLAGS, format[d->pos]) != NULL)
	{
		if (format[d->pos] == '#')
			d->hash = 1;
		else if (format[d->pos] == '0')
			d->zero = 1;
		else if (format[d->pos] == '-')
			d->minus = 1;
		else if (format[d->pos] == '+')
			d->plus = 1;
		else if (format[d->pos] == ' ')
			d->space = 1;
		d->pos++;
	}
	if (d->plus == 1)
		d->space = 0;
}

void	width(const char *format, va_list ap, t_struct *d)
{
	int		i;
	char	str[20];

	i = 0;
	while (ft_strchr("0123456789", format[d->pos]) != NULL)
	{
		str[i] = format[d->pos];
		i++;
		d->pos++;
	}
	str[i] = '\0';
	if (i == 0)	//if there is no width given by numbers check asterix
	{
		if (format[d->pos] == '*')
		{
					d->width = va_arg(ap, int);
					if(d->width < 0)
					{
						d->width *= -1;
						d->minus = 1;
					}
					d->pos++;
		}
	}
	if (i > 0)
		d->width = ft_atoi(str);
}

void	precision(const char *format, va_list ap, t_struct *d)
{
	int		i;
	char	str[20];
	
	i = 0;
	if (format[d->pos] == '.')
	{
		d->pos++;
		while (ft_strchr("0123456789", format[d->pos]) != NULL)
		{
			str[i] = format[d->pos];
			i++;
			d->pos++;
		}
		if (i == 0)	//if there is no precision given by numbers check asterix
		{
			if (format[d->pos] == '*')
			{
				d->padding = va_arg(ap, int);
				d->pos++;
				if (d->padding < 0)
				{
					d->padding = 1;
					d->s_pad = -1;
				}
			}
		}
		str[i] = '\0';
		if (i > 0)
			d->padding = ft_atoi(str);
		else if (d->padding == -1)
			d->padding = 0;
	}
}

void	modifiers(const char *format, t_struct *d)
{
	if (format[d->pos] == 'h' && format[d->pos + 1] == 'h')
	{
		d->mod_hh = 1;
		d->pos = d->pos + 2;
	}
	else if (format[d->pos] == 'l' && format[d->pos + 1] == 'l')
	{
		d->mod_ll = 1;
		d->pos = d->pos + 2;
	}
	else if (format[d->pos] == 'h')
	{
		d->mod_h = 1;
		d->pos++;
	}
	else if (format[d->pos] == 'l')
	{
 		d->mod_l = 1;
		d->pos++;
	}
	else if (format[d->pos] == 'L')
	{
		d->mod_L = 1;
		d->pos++;
	}
}
