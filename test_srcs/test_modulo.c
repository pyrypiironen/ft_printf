/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filechecker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:31:27 by ppiirone          #+#    #+#             */
/*   Updated: 2022/04/04 12:31:52 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_modulo()
{
	int real_return;
	int my_return;


	ft_putendl("\n\n * * * * * * * * * * MODULO CHARACTER:  * * * * * * * * * *\n");

	ft_putendl("\nInput: %%");
	my_return = ft_printf("My ft_printf: %% $\n");
	real_return = printf("Real  printf: %% $\n");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.5%");
	my_return = ft_printf("My ft_printf: %.5% $\n");
	real_return = printf("Real  printf: %.5% $\n");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %7.5%");
	my_return = ft_printf("My ft_printf: %7.5% $\n");
	real_return = printf("Real  printf: %7.5% $\n");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %5%");
	my_return = ft_printf("My ft_printf: %5% $\n");
	real_return = printf("Real  printf: %5% $\n");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-5%");
	my_return = ft_printf("My ft_printf: %-5% $\n");
	real_return = printf("Real  printf: %-5% $\n");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.0%");
	my_return = ft_printf("My ft_printf: %.0% $\n");
	real_return = printf("Real  printf: %.0% $\n");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %%, 'test'");
	my_return = ft_printf("My ft_printf: %% $\n", "test");
	real_return = printf("Real  printf: %% $\n", "test");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %   %, 'test'");
	my_return = ft_printf("My ft_printf: %   % $\n", "test");
	real_return = printf("Real  printf: %   % $\n", "test");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);








}
