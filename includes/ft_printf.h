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
#include <stdio.h> //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
# include <stdarg.h>

# define CONVERSION	"cspdiouxXf%"
# define FLAGS		"#0-+ "
# define SPECIFIERS	"#0-+ .*0123456789hlL"

typedef struct		s_struct
{
	//					POSITION on format string
	int					pos;
	//					CONVERSION TYPE
	int					conv_o;
	int					conv_x;
	int					conv_X;
	int					conv_p;
	//					FLAGS
	int					hash;
	int					zero;
	int					plus;
	int					minus;
	int					space;
	//					MINIMUM FIELD WIDTH (value)
	int					width;
	//					PRECISION (value)
	int					padding;
	//					** -1 is default, because zero is significant.
	//					LENGTH MODIFIERS
	int					mod_h;
	int					mod_hh;
	int					mod_l;
	int					mod_ll;
	int					mod_L;
	//					PRINTING (value)
	int					input_len;
	int					print_len;
	//					ARGUMENTS (value)
	long long			arg;
	unsigned long long	arg_o;
	char				arg_c;
	//					RETURN (value)
	int					res;
}						t_struct;


int		ft_printf(const char *format, ...);
int		read_format(const char *format, va_list ap, t_struct *d);

//		READ SPECIFIERS
int		is_conversion(const char *format, t_struct *d);
void	flags(const char *format, t_struct *d);
void	width(const char *format, t_struct *d);
void	precision(const char *format, t_struct *d);
void	modifiers(const char *format, t_struct *d);

//		CONVERSION TYPE
void	conversion(const char *format, va_list ap, t_struct *d);

//		SIGNED DESIMAL
void	convert_di(va_list ap, t_struct *d);
void	read_arg(t_struct *d, va_list ap);
int		print_len(t_struct *d);
void	fill_print(t_struct *d, char *print); 					//diouxX
void	plant_arg(t_struct *d, char *print, char *input);
void	adjust_left(t_struct *d ,char *print);					//diouxXcs
void	zero_precision_check(t_struct *d, char *print);

//		UNSIGNED OCTAL
void	convert_o(va_list ap, t_struct *d);
void	read_arg_unsigned(t_struct *d, va_list ap);					//ouxX
char	*ft_itoa_base(unsigned long long n, int base);				//ouxX
int		print_len_unsigned(t_struct *d, int len);					//ouxX
void	plant_arg_unsigned(t_struct *d, char *print, char  *input); //ouxX

//		UNSIGNED DESIMAL
void	convert_u(va_list ap, t_struct *d);

//		UNSIGNED HEXADESIMAL
void	convert_x(va_list ap, t_struct *d);
void	to_lowercase(char *print);
void	zero_precision_check_unsigned(char *print, t_struct *d);				//ox

//		CHARACTER
void	convert_c(va_list ap, t_struct *d);
void	adjust_left_char(t_struct *d ,char *print);
void	fill_print_char(t_struct *d, char *print);

//		CHARACTER STRING
void	convert_s(va_list ap, t_struct *d);
void	fill_print_str(t_struct *d, char *print, char *input);
void	print_len_str(t_struct *d);

//		VOID POINTER
void	convert_p(va_list ap, t_struct *d);

//		MODULO CHARACTER
void	convert_modulo(t_struct *d);



//		STRUCT SETTINGS
void	set_struct(t_struct *d);
void	reset_struct(t_struct *d);


#endif