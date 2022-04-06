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
	char *a1 = "Hello";


	ft_putendl("\n\n * * * * * * * * * * Some of my 42FileChecker errors:  * * * * * * * * * *\n");


	ft_putendl("\nInput: %p ");
	my_return = ft_printf("My ft_printf: %p $\n", &a1);
	real_return = printf("Real  printf: %p $\n", &a1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %35p ");
	my_return = ft_printf("My ft_printf: %35p $\n", &a1);
	real_return = printf("Real  printf: %35p $\n", &a1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-35p ");
	my_return = ft_printf("My ft_printf: %-35p $\n", &a1);
	real_return = printf("Real  printf: %-35p $\n", &a1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);




}