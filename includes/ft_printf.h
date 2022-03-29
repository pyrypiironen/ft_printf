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
# define SPECIFIERS	"#0-+ .*0123456789hlL"


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
	//				PRINTING
	int				input_len;
	int				print_len;
	long long		arg;
	unsigned long long	arg_o;
	//				RETURN
	int				res;
}					t_struct;



int		ft_printf(const char *format, ...);
int		read_format(const char *format, va_list ap, t_struct *d);

int		is_conversion(const char *format, t_struct *d);
void	flags(const char *format, t_struct *d);
void	width(const char *format, t_struct *d);
void	precision(const char *format, t_struct *d);
void	modifiers(const char *format, t_struct *d);

void	conversion(const char *format, va_list ap, t_struct *d);

void	convert_di(va_list ap, t_struct *d);
void	read_arg(t_struct *d, va_list ap);
int		print_len(t_struct *d, int input_len);
void	fill_print(t_struct *d, char *print); 					//diou
void	plant_arg(t_struct *d, char *print, char *input);
void	adjust_left(t_struct *d ,char *print);					//diou

void	convert_o(va_list ap, t_struct *d);
void	read_arg_unsigned(t_struct *d, va_list ap);					//ou
char	*ft_itoa_base(unsigned long long n, int base);				//ou
int		print_len_unsigned(t_struct *d, int len);					//ou
void	plant_arg_unsigned(t_struct *d, char *print, char  *input); //ou

void	convert_u(va_list ap, t_struct *d);


void	set_struct(t_struct *d);
void	reset_struct(t_struct *d);








#endif