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


	ft_putendl("\nInput: ");
	my_return = ft_printf("My ft_printf:  $\n", 0);
	real_return = printf("Real  printf:  $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);









}