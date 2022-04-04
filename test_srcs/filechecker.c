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
	int my_return;


	ft_putendl("\n\n * * * * * * * * * * Some of my 42FileChecker errors:  * * * * * * * * * *\n");

	
	ft_putendl("\nInput: %s, NULL");
	my_return = ft_printf("My ft_printf: %s $\n", NULL);
	real_return = printf("Real  printf: %s $\n", NULL);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %s %s, NULL, string");
	my_return = ft_printf("My ft_printf: %s %s $\n", NULL, "Holla!");
	real_return = printf("Real  printf: %s %s $\n", NULL, "Holla!");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0+5d");
	my_return = ft_printf("My ft_printf: %0+5d $\n", 42);
	real_return = printf("Real  printf: %0+5d $\n", 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);
//----------
	ft_putendl("\nInput: %05d");
	my_return = ft_printf("My ft_printf: %05d $\n", -42);
	real_return = printf("Real  printf: %05d $\n", -42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);
//----------
	ft_putendl("\nInput: %0+5d");
	my_return = ft_printf("My ft_printf: %0+5d $\n", -42);
	real_return = printf("Real  printf: %0+5d $\n", -42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput:%5.d %5.0d");
	my_return = ft_printf("My ft_printf: %5.d %5.0d $\n", 0, 0);
	real_return = printf("Real  printf: %5.d %5.0d $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput:%.d %.0d");
	my_return = ft_printf("My ft_printf: %.d %.0d $\n", 0, 0);
	real_return = printf("Real  printf: %.d %.0d $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);



}