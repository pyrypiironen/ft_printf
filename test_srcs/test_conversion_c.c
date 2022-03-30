/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_conversion_c.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:08:46 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/30 17:08:47 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_conversion_c()
{
	int real_return;
	int my_return;


	ft_putendl("\n\n * * * * * * * * * * CHAR (int converted to unsigned char) - Conversion c:  * * * * * * * * * *\n");

	ft_putendl("Input: %c");
	my_return = ft_printf("My ft_printf: %c $\n", 72);
	real_return = printf("Real  printf: %c $\n", 72);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %8c");
	my_return = ft_printf("My ft_printf: %8c $\n", 73);
	real_return = printf("Real  printf: %8c $\n", 73);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-8c");
	my_return = ft_printf("My ft_printf: %-8c $\n", 86);
	real_return = printf("Real  printf: %-8c $\n", 86);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-c");
	my_return = ft_printf("My ft_printf: %-c $\n", 69);
	real_return = printf("Real  printf: %-c $\n", 69);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %c");
	my_return = ft_printf("My ft_printf: %c $\n", 127);
	real_return = printf("Real  printf: %c $\n", 127);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %c");
	my_return = ft_printf("My ft_printf: %c $\n", 128);
	real_return = printf("Real  printf: %c $\n", 128);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %c");
	my_return = ft_printf("My ft_printf: %c $\n", -1);
	real_return = printf("Real  printf: %c $\n", -1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);


}

