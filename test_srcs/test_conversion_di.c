/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_conversion_di.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 18:42:58 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/24 18:43:00 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_conversion_di()
{
	int a = 207;
	int b = -207;
	//int max = 2147483647;

	ft_putendl("SIGNED DESIMAL - Conversion di:\n");

	ft_putendl("Input: %+8.3d");
	ft_printf("My ft_printf: %+8.3d $\n", a);
	printf("Real  printf: %+8.3d $\n", a);
	ft_putendl("\nInput: % 8.3d");
	ft_printf("My ft_printf: % 8.3d $\n", a);
	printf("Real  printf: % 8.3d $\n", a);

	ft_putendl("\nInput: %08.5d");
	ft_printf("My ft_printf: %08.5d $\n", a);
	printf("Real  printf: %08.5d $\n", a);

	ft_putendl("\nInput: %+08.5d");
	ft_printf("My ft_printf: %+08.5d $\n", a);
	printf("Real  printf: %+08.5d $\n", a);

	ft_putendl("\nInput: % 08.5d");
	ft_printf("My ft_printf: % 08.5d $\n", a);
	printf("Real  printf: % 08.5d $\n", a);

	ft_putendl("\nInput: %.5d");
	ft_printf("My ft_printf: %.5d $\n", a);
	printf("Real  printf: %.5d $\n", a);

	ft_putendl("\nInput: %05d");
	ft_printf("My ft_printf: %05d $\n", a);
	printf("Real  printf: %05d $\n", a);

	ft_putendl("\nInput: % d");
	ft_printf("My ft_printf: % d $\n", a);
	printf("Real  printf: % d $\n", a);

	//zero input

	ft_putendl("\nInput: %+0d");
	ft_printf("My ft_printf: %+0d $\n", 0);
	printf("Real  printf: %+0d $\n", 0);

	//negative input

	ft_putendl("\nInput: %+8.3d");
	ft_printf("My ft_printf: %+8.3d $\n", b);
	printf("Real  printf: %+8.3d $\n", b);

	ft_putendl("\nInput: % 8.3d");
	ft_printf("My ft_printf: % 8.3d $\n", b);
	printf("Real  printf: % 8.3d $\n", b);

	ft_putendl("\nInput: %08.5d");
	ft_printf("My ft_printf: %08.5d $\n", b);
	printf("Real  printf: %08.5d $\n", b);

	ft_putendl("\nInput: %+08.5d");
	ft_printf("My ft_printf: %+08.5d $\n", b);
	printf("Real  printf: %+08.5d $\n", b);

	ft_putendl("\nInput: % 08.5d");
	ft_printf("My ft_printf: % 08.5d $\n", b);
	printf("Real  printf: % 08.5d $\n", b);

	ft_putendl("\nInput: % d");
	ft_printf("My ft_printf: % d $\n", b);
	printf("Real  printf: % d $\n", b);
}
