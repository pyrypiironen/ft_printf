/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:57:30 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/07 14:57:31 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

# define CONVERSION	"cspdiouxXf%"
# define FLAGS		"#0-+ "
# define SPECIFIERS	"#0-+ .*0123456789hlL" // z ?


typedef struct		s_struct
{
	//				POSITION on format string
	int				pos;
	//				FLAGS
	int				hash;
	int				zero;
	int				plus;
	int				minus;
	int				space;
	//				WIDTH
	int				width;		//value
	//				PRECISION
	int				padding;	//value
	//				MODIFIERS
	int				mod_h;
	int				mod_hh;
	int				mod_l;
	int				mod_ll;
	int				mod_L;
}					t_struct;



int		ft_printf(const char *format, ...);
int		read_format(const char *format, va_list ap, t_struct *d);

int		is_conversion(const char *format, t_struct *d);
void	flags(const char *format, t_struct *d);
void	width(const char *format, t_struct *d);
void	precision(const char *format, t_struct *d);
void	modifiers(const char *format, t_struct *d);
void	conversion(const char *format, va_list ap, t_struct *d);
void	convert_di(const char *format, va_list ap, t_struct *d);

void	set_struct(t_struct *d);
void	reset_struct(t_struct *d);








#endif