/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filechecker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:59:00 by ppiirone          #+#    #+#             */
/*   Updated: 2022/04/04 13:59:02 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "test.h"

void	filechecker()
{
	int real_return;
	int my_return = 0;
	//char *a1 = "Hello";


	ft_putendl("\n\n * * * * * * * * * * Some of my 42FileChecker errors:  * * * * * * * * * *\n");


	ft_putendl("\nInput: %*d");
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



}