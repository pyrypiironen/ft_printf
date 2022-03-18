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

# define FLAGS "#0-+ "
# define WIDTH


typedef struct	    s_struct
{
    int				pos;	    // position where we are at
    int             
    
    //              FLAGS
    int             hash;
    int             zero;
    int             plus;
    int             minus;
    int             space;
    //              MODIFIERS
    int             mod_h;
    int             mod_hh;
    int             mod_l;
    int             mod_ll;
    int             mod_L;


}				t_struct;



int		ft_printf(const char *format, ...);
void    flags(const char *format, t_struct data);
//int     is_printable((const char *format, t_struct data);
void    min_width(const char *format, t_struct data);
void    precision(const char *format, t_struct data);
int     read_format(const char *format, va_list ap, t_struct data);
void    set_struct(t_struct *d);
void    reset_struct(t_struct *d);








#endif