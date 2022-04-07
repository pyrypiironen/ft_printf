/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_asterix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:55:35 by ppiirone          #+#    #+#             */
/*   Updated: 2022/04/06 18:55:37 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_asterix()
{
	int real_return;
	int my_return = 0;


	ft_putendl("\n\n * * * * * * * * * * Asterix (*): * * * * * * * * * *\n");

	ft_putendl("Input: %*d");
	my_return = ft_printf("My ft_printf: %*d $\n", 12, 42);
	real_return = printf("Real  printf: %*d $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*d");
	my_return = ft_printf("My ft_printf: %*.8d $\n", 12, 42);
	real_return = printf("Real  printf: %*.8d $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*d");
	my_return = ft_printf("My ft_printf: %*.18u $\n", 12, 42);
	real_return = printf("Real  printf: %*.18u $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*d");
	my_return = ft_printf("My ft_printf: % *d $\n", 12, 42);
	real_return = printf("Real  printf: % *d $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*d");
	my_return = ft_printf("My ft_printf: %+*o $\n", 12, 42);
	real_return = printf("Real  printf: %+*o $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*d");
	my_return = ft_printf("My ft_printf: %-*i $\n", 12, 42);
	real_return = printf("Real  printf: %-*i $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*x");
	my_return = ft_printf("My ft_printf: %*x $\n", 12, 42);
	real_return = printf("Real  printf: %*x $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*x");
	my_return = ft_printf("My ft_printf: %*x $\n", 12, 42);
	real_return = printf("Real  printf: %*x $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*s (maybe undefined behavior)");
	my_return = ft_printf("My ft_printf: %*x $\n", 12, 42);
	real_return = printf("Real  printf: %*x $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %*c (maybe undefined behavior)");
	my_return = ft_printf("My ft_printf: %*x $\n", 12, 42);
	real_return = printf("Real  printf: %*x $\n", 12, 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.*s");
	my_return = ft_printf("My ft_printf: %.*s $\n", 3, "Hello");
	real_return = printf("Real  printf: %.*s $\n", 3, "Hello");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.*d");
	my_return = ft_printf("My ft_printf: %.*d $\n", -1, 0);
	real_return = printf("Real  printf: %.*d $\n", -1, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.*u");
	my_return = ft_printf("My ft_printf: %.*u $\n", -1, 0);
	real_return = printf("Real  printf: %.*u $\n", -1, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.*o");
	my_return = ft_printf("My ft_printf: %.*o $\n", -1, 0);
	real_return = printf("Real  printf: %.*o $\n", -1, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.*x");
	my_return = ft_printf("My ft_printf: %.*x $\n", -1, 0);
	real_return = printf("Real  printf: %.*x $\n", -1, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.*X");
	my_return = ft_printf("My ft_printf: %.*X $\n", -1, 0);
	real_return = printf("Real  printf: %.*X $\n", -1, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.*s");
	my_return = ft_printf("My ft_printf: %.*s $\n", -1, 0);
	real_return = printf("Real  printf: %.*s $\n", -1, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);



}
