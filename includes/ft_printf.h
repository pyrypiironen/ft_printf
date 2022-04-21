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

# define CONVERSION	"cspdiouxXf%b"
# define FLAGS		"#0-+ "
# define SPECIFIERS	"#0-+ .*0123456789hlL"

typedef struct		s_struct
{
	//					PRINTING
	char				print[420];
	int					ppos;
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
	//					** -1 is default, because zero is significant.
	int					padding;
	int					s_pad;
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
	long double			arg_f;
	//					RETURN (value)
	int					res;
}						t_struct;


int		ft_printf(const char *format, ...);
int		read_format(const char *format, va_list ap, t_struct *d);

//		* * * * * READ SPECIFIERS * * * * *
int		is_conversion(const char *format, t_struct *d);
void	flags(const char *format, t_struct *d);
void	width(const char *format, va_list ap, t_struct *d);
void	precision(const char *format, va_list ap, t_struct *d);
void	modifiers(const char *format, t_struct *d);

//		* * * * * CONVERSION TABLE * * * * *
void	conversion(const char *format, va_list ap, t_struct *d);

//		* * * * * SOME CONVERTS * * * * *
void	convert_octal(va_list ap, t_struct *d);
void	convert_unsigned_int(va_list ap, t_struct *d);
void	convert_hexadecimal(va_list ap, t_struct *d);
void	convert_pointer(va_list ap, t_struct *d);
void	convert_modulo(t_struct *d);

//		* * * * * HELPERS COMMON * * * * *
void	fill_print(t_struct *d, char *print);
void	adjust_left(t_struct *d ,char *print);
void	to_lowercase(char *print);

//		* * * * * HELPERS UNSIGNED * * * * *
void	read_arg_unsigned(t_struct *d, va_list ap);
int		print_len_unsigned(t_struct *d, int len);
void	plant_arg_unsigned(t_struct *d, char *print, char  *input);
void	zero_precision_check_unsigned(char *print, t_struct *d);

//		* * * * * SIGNED DESIMAL * * * * *
void	convert_int(va_list ap, t_struct *d);
void	read_arg(t_struct *d, va_list ap);
int		print_len(t_struct *d);
void	plant_arg(t_struct *d, char *print, char *input);
void	zero_precision_check(t_struct *d, char *print);

//		* * * * * CHARACTER * * * * *
void	convert_char(va_list ap, t_struct *d);
void	adjust_left_char(t_struct *d ,char *print);
void	fill_print_char(t_struct *d, char *print);

//		* * * * * CHARACTER STRING * * * * *
void	convert_string(va_list ap, t_struct *d);
void	fill_print_str(t_struct *d, char *print, char *input);
void	print_len_str(t_struct *d);

//		* * * * * DOUBLE * * * * *
void	convert_double(va_list ap, t_struct *d);
void	rounders(t_struct *d);
//		* * HELPERS DOUBLE * *
void	read_arg_double(t_struct *d, va_list ap);
int		print_len_double(t_struct *d);
void	fill_print_double(t_struct *d, char *print);
void	plant_arg_double(t_struct *d, char *print, char  *input);
int		is_negative(double nbr);
//		* * DTOA * *
char	*dtoa(int precision, t_struct *d);
char	*fractional_part(long double n, int precision, t_struct *d);
void	check_fractional(char *fractional);

//		* * * * * BINARY * * * * *
void	convert_binary(const char *format, va_list ap, t_struct *d);
void	print_len_binary(t_struct *d);
void	fill_print_binary(t_struct *d, char *print, char *input);
char	*prepare_input(const char *format, va_list ap, t_struct *d);

//		* * * * *STRUCT SETTINGS * * * * *
void	set_struct(t_struct *d);
void	reset_struct(t_struct *d);

//		* * * * * PRINT * * * * *
void	add_to_print(char *print, t_struct *d);
void	print_it(t_struct *d);

#endif