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
	short h = 207;
	signed char hh = 'b';
	long l = 2147483647;					//max long, same as max int
	long long ll = 9223372036854775807; 	//max long long
	int real_return;
	int my_return;
	int max = 2147483647;
	long min_long = -2147483647 - 1;
	long long min_long_long = -9223372036854775807 - 1;

	ft_putendl("\n\n * * * * * * * * * * SIGNED DESIMAL - Conversion di:  * * * * * * * * * *\n");

	ft_putendl("Input: %d");
	my_return = ft_printf("My ft_printf: %d $\n", a);
	real_return = printf("Real  printf: %d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %03.2d");
	my_return = ft_printf("My ft_printf: %03.2d $\n", -1);
	real_return = printf("Real  printf: %03.2d $\n", -1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+8.3d");
	my_return = ft_printf("My ft_printf: %+8.3d $\n", a);
	real_return = printf("Real  printf: %+8.3d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % 8.3d");
	my_return = ft_printf("My ft_printf: % 8.3d $\n", a);
	real_return = printf("Real  printf: % 8.3d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %08.5d");
	my_return = ft_printf("My ft_printf: %08.5d $\n", a);
	real_return = printf("Real  printf: %08.5d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+08.5d");
	my_return = ft_printf("My ft_printf: %+08.5d $\n", a);
	real_return = printf("Real  printf: %+08.5d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % 08.5d");
	my_return = ft_printf("My ft_printf: % 08.5d $\n", a);
	real_return = printf("Real  printf: % 08.5d $\n", a);
		if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.5d");
	my_return = ft_printf("My ft_printf: %.5d $\n", a);
	real_return = printf("Real  printf: %.5d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %05d");
	my_return = ft_printf("My ft_printf: %05d $\n", a);
	real_return = printf("Real  printf: %05d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % d");
	my_return = ft_printf("My ft_printf: % d $\n", a);
	real_return = printf("Real  printf: % d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %5.d");
	my_return = ft_printf("My ft_printf: %5.d $\n", a);
	real_return = printf("Real  printf: %5.d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ZERO INPUT
	ft_putendl("\n\n * * * * * Zero input:  * * * * *");

	ft_putendl("\nInput: %+0d");
	my_return = ft_printf("My ft_printf: %+0d $\n", 0);
	real_return = printf("Real  printf: %+0d $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % 0d");
	my_return = ft_printf("My ft_printf: % 0d $\n", 0);
	real_return = printf("Real  printf: % 0d $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % .8d");
	my_return = ft_printf("My ft_printf: % .8d $\n", 0);
	real_return = printf("Real  printf: % .8d $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// NEGATIVE INPUT
	ft_putendl("\n\n * * * * * Negative input:  * * * * *");

	ft_putendl("\nInput: %d");
	my_return = ft_printf("My ft_printf: %d $\n", b);
	real_return = printf("Real  printf: %d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.8d");
	my_return = ft_printf("My ft_printf: %.8d $\n", b);
	real_return = printf("Real  printf: %.8d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+8.3d");
	my_return = ft_printf("My ft_printf: %+8.3d $\n", b);
	real_return = printf("Real  printf: %+8.3d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % 8.3d");
	my_return = ft_printf("My ft_printf: % 8.3d $\n", b);
	real_return = printf("Real  printf: % 8.3d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %08.5d");
	my_return = ft_printf("My ft_printf: %08.5d $\n", b);
	real_return = printf("Real  printf: %08.5d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+08.5d");
	my_return = ft_printf("My ft_printf: %+08.5d $\n", b);
	real_return = printf("Real  printf: %+08.5d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % 08.5d");
	my_return = ft_printf("My ft_printf: % 08.5d $\n", b);
	real_return = printf("Real  printf: % 08.5d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % d");
	my_return = ft_printf("My ft_printf: % d $\n", b);
	real_return = printf("Real  printf: % d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// MAX AND MIN
	ft_putendl("\n\n * * * * * Max and min:  * * * * *");

	ft_putendl("\nInput: %d (max int)");
	my_return = ft_printf("My ft_printf: %d $\n", max);
	real_return = printf("Real  printf: %d $\n", max);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: % 8.4d (max int)");
	my_return = ft_printf("My ft_printf: % 8.4d $\n", max);
	real_return = printf("Real  printf: % 8.4d $\n", max);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %d (min int)");
	my_return = ft_printf("My ft_printf: %d $\n", -2147483647 - 1);
	real_return = printf("Real  printf: %d $\n", -2147483647 - 1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %ld (min long)");
	my_return = ft_printf("My ft_printf: %ld $\n", min_long);
	real_return = printf("Real  printf: %ld $\n", min_long);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %lld (max long long)");
	my_return = ft_printf("My ft_printf: %lld $\n", ll);
	real_return = printf("Real  printf: %lld $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %lld (min long long)");
	my_return = ft_printf("My ft_printf: %lld $\n", min_long_long);
	real_return = printf("Real  printf: %lld $\n", min_long_long);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ADJUST LEFT
	ft_putendl("\n\n * * * * * Adjust left:  * * * * *");

	ft_putendl("\nInput: %-.8d");
	my_return = ft_printf("My ft_printf: %-.8d $\n", a);
	real_return = printf("Real  printf: %-.8d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-8d");
	my_return = ft_printf("My ft_printf: %-8d $\n", a);
	real_return = printf("Real  printf: %-8d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %- 8d");
	my_return = ft_printf("My ft_printf: %- 8d $\n", b);
	real_return = printf("Real  printf: %- 8d $\n", b);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %- d");
	my_return = ft_printf("My ft_printf: %- d $\n", a);
	real_return = printf("Real  printf: %- d $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %- d");
	my_return = ft_printf("My ft_printf: %- d $\n", 0);
	real_return = printf("Real  printf: %- d $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// LENGTH MODIFIERS
	ft_putendl("\n\n * * * * * Lengt modifiers:  * * * * *");

	ft_putendl("\nInput: %hd");
	my_return = ft_printf("My ft_printf: %hd $\n", h);
	real_return = printf("Real  printf: %hd $\n", h);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %hhd");
	my_return = ft_printf("My ft_printf: %hhd $\n", hh);
	real_return = printf("Real  printf: %hhd $\n", hh);
	if(my_return != real_return)
	 	printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %ld");
	my_return = ft_printf("My ft_printf: %ld $\n", l);
	real_return = printf("Real  printf: %ld $\n", l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %lld");
	my_return = ft_printf("My ft_printf: %lld $\n", ll);
	real_return = printf("Real  printf: %lld $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// RANDOM TESTS
	ft_putendl("\n\n * * * * * Random tests:  * * * * *");

	ft_putendl("\nInput: %-+35.25lld");
	my_return = ft_printf("My ft_printf: %-+35.25lld $\n", ll);
	real_return = printf("Real  printf: %-+35.25lld $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0+35.lld");
	my_return = ft_printf("My ft_printf: %0+35.lld $\n", ll);
	real_return = printf("Real  printf: %0+35.lld $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0+35.lld");
	my_return = ft_printf("My ft_printf: %0+35.lld $\n", -ll);
	real_return = printf("Real  printf: %0+35.lld $\n", -ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0+5d");
	my_return = ft_printf("My ft_printf: %0+5d $\n", 42);
	real_return = printf("Real  printf: %0+5d $\n", 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %05d");
	my_return = ft_printf("My ft_printf: %05d $\n", -42);
	real_return = printf("Real  printf: %05d $\n", -42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

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

	ft_putendl("\nInput: % 03d");
	my_return = ft_printf("My ft_printf: % 03d $\n", 0);
	real_return = printf("Real  printf: % 03d $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+03d");
	my_return = ft_printf("My ft_printf: %+03d $\n", 0);
	real_return = printf("Real  printf: %+03d $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// Testing with multiple arguments
	ft_putendl("\n\n * * * * * Testing with multiple arguments:  * * * * *");

	ft_putendl("\nInput: %35d, %+d and %lld");
	my_return = ft_printf("My ft_printf: %35d, %+d and %lld $\n", b, a, ll);
	real_return = printf("Real  printf: %35d, %+d and %lld $\n", b, a, ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.35d, % d and %lld");
	my_return = ft_printf("My ft_printf: %.35d, % d and %lld $\n", b, a, ll);
	real_return = printf("Real  printf: %.35d, % d and %lld $\n", b, a, ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ERROR TEST
	// ft_putendl("\n\n * * * * * Error test:  * * * * *");

	// ft_putendl("\nInput: %-0d");
	// ft_printf("My ft_printf: %-0d $\n", a);
	//printf("Real  printf: %-0d $\n", 0);

}
