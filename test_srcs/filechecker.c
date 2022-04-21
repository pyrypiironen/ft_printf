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


	ft_putendl("\nInput: ");
	my_return = ft_printf("My ft_printf: %*3d $\n", 5, 0);
	real_return = printf("Real  printf: %*3d $\n", 5, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.2f ");
	my_return = ft_printf("My ft_printf: %.2f $\n", -958.125000);
	real_return = printf("Real  printf: %.2f $\n", -958.125000);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0#10.1f ");
	my_return = ft_printf("My ft_printf: %0#10.1f $\n", 0.250000);
	real_return = printf("Real  printf: %0#10.1f $\n", 0.250000);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0#10.1f ");
	my_return = ft_printf("My ft_printf: %0#10.1f $\n", 0.150000);
	real_return = printf("Real  printf: %0#10.1f $\n", 0.150000);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0#10.1f ");
	my_return = ft_printf("My ft_printf: %f $\n", 2.5555545);
	real_return = printf("Real  printf: %f $\n", 2.5555545);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

ft_putendl("\nInput: %.3f ");
	my_return = ft_printf("My ft_printf: %.3f $\n", 0.000500);
	real_return = printf("Real  printf: %.3f $\n", 0.000500);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);


}