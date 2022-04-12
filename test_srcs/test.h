/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:46:49 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/24 18:46:50 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include "../includes/ft_printf.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>

void	test_conversion_di();
void	test_conversion_o();
void	test_conversion_u();
void	test_conversion_x();
void	test_conversion_c();
void	test_conversion_s();
void	test_conversion_p();
void	test_conversion_f();
void	test_modulo();
void	test_asterix();
void	filechecker();

#endif