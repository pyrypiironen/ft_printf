/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_conversion_s.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 18:30:39 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/30 18:30:40 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_conversion_s()
{	
	char	*hello = "Hello world!";

	int real_return;
	int my_return = 0;


	ft_putendl("\n\n * * * * * * * * * * CHARACTER STRING (pointer to char array) - Conversion s:  * * * * * * * * * *\n");

	ft_putendl("Input: %s");
	my_return = ft_printf("My ft_printf: %s $\n", hello);
	real_return = printf("Real  printf: %s $\n", hello);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %25s");
	my_return = ft_printf("My ft_printf: %25s $\n", hello);
	real_return = printf("Real  printf: %25s $\n", hello);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.5s");
	my_return = ft_printf("My ft_printf: %.5s $\n", hello);
	real_return = printf("Real  printf: %.5s $\n", hello);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %2s");
	my_return = ft_printf("My ft_printf: %2s $\n", hello);
	real_return = printf("Real  printf: %2s $\n", hello);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %2.5s");
	my_return = ft_printf("My ft_printf: %2.5s $\n", hello);
	real_return = printf("Real  printf: %2.5s $\n", hello);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %25.5s");
	my_return = ft_printf("My ft_printf: %25.5s $\n", hello);
	real_return = printf("Real  printf: %25.5s $\n", hello);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %s, (empty string)");
	my_return = ft_printf("My ft_printf: %s $\n", "");
	real_return = printf("Real  printf: %s $\n", "");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-10s , (empty string)");
	my_return = ft_printf("My ft_printf: %-10s $\n", "");
	real_return = printf("Real  printf: %-10s $\n", "");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

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

}
