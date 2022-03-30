/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_conversion_u.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 17:20:11 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/29 17:20:12 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_conversion_u()
{

	unsigned int a = 207;
	unsigned int b = 0;
	unsigned short h = 207;
	unsigned char hh = 'b';
	unsigned long l = 4294967295;
	unsigned long long ll = 18446744073709551615U;
	unsigned long long ll2 = 18446744073709551614U;
	int real_return;
	int my_return;
	unsigned int max = 4294967295;

	ft_putendl("\n\n * * * * * * * * * * UNSIGNED DESIMAL - Conversion u:  * * * * * * * * * *\n");

	ft_putendl("Input: %u");
	my_return = ft_printf("My ft_printf: %u $\n", a);
	real_return = printf("Real  printf: %u $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %08.5u");
	my_return = ft_printf("My ft_printf: %08.5u $\n", a);
	real_return = printf("Real  printf: %08.5u $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.5u");
	my_return = ft_printf("My ft_printf: %.5u $\n", a);
	real_return = printf("Real  printf: %.5u $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %05u");
	my_return = ft_printf("My ft_printf: %05u $\n", a);
	real_return = printf("Real  printf: %05u $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %5.u");
	my_return = ft_printf("My ft_printf: %5.u $\n", a);
	real_return = printf("Real  printf: %5.u $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ZERO INPUT
	ft_putendl("\n\n * * * * * Zero input:  * * * * *");

	ft_putendl("\nInput: %0u");
	my_return = ft_printf("My ft_printf: %0u $\n", 0);
	real_return = printf("Real  printf: %0u $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.8u");
	my_return = ft_printf("My ft_printf: %.8u $\n", 0);
	real_return = printf("Real  printf: %.8u $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// NEGATIVE INPUT
	ft_putendl("\n\n * * * * * Negative input: * * * * * (undefined behavior?)");

	ft_putendl("\nInput: %u");
	my_return = ft_printf("My ft_printf: %u $\n", -42);
	real_return = printf("Real  printf: %u $\n", -42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.8u");
	my_return = ft_printf("My ft_printf: %.8u $\n", -142);
	real_return = printf("Real  printf: %.8u $\n", -142);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// MAX UNSIGNED INT
	ft_putendl("\n\n * * * * * Max unsigned int:  * * * * *");

	ft_putendl("\nInput: %u");
	my_return = ft_printf("My ft_printf: %u $\n", max);
	real_return = printf("Real  printf: %u $\n", max);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %8.4u");
	my_return = ft_printf("My ft_printf: %8.4u $\n", max);
	real_return = printf("Real  printf: %8.4u $\n", max);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ADJUST LEFT
	ft_putendl("\n\n * * * * * Adjust left:  * * * * *");

	ft_putendl("\nInput: %-.8u");
	my_return = ft_printf("My ft_printf: %-.8u $\n", a);
	real_return = printf("Real  printf: %-.8u $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-8u");
	my_return = ft_printf("My ft_printf: %-8u $\n", a);
	real_return = printf("Real  printf: %-8u $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-u");
	my_return = ft_printf("My ft_printf: %-u $\n", a);
	real_return = printf("Real  printf: %-u $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// LENGTH MODIFIERS
	ft_putendl("\n\n * * * * * Lengt modifiers:  * * * * *");

	ft_putendl("\nInput: %hu");
	my_return = ft_printf("My ft_printf: %hu $\n", h);
	real_return = printf("Real  printf: %hu $\n", h);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %hhu");
	my_return = ft_printf("My ft_printf: %hhu $\n", hh);
	real_return = printf("Real  printf: %hhu $\n", hh);
	if(my_return != real_return)
	 	printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %lu");
	my_return = ft_printf("My ft_printf: %lu $\n", l);
	real_return = printf("Real  printf: %lu $\n", l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %llu");
	my_return = ft_printf("My ft_printf: %llu $\n", ll);
	real_return = printf("Real  printf: %llu $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %llu");
	my_return = ft_printf("My ft_printf: %llu $\n", ll2);
	real_return = printf("Real  printf: %llu $\n", ll2);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// RANDOM TESTS
	ft_putendl("\n\n * * * * * Random tests:  * * * * *");

	ft_putendl("\nInput: %-35.25llu");
	my_return = ft_printf("My ft_printf: %-35.25llu $\n", ll);
	real_return = printf("Real  printf: %-35.25llu $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %035.llu");
	my_return = ft_printf("My ft_printf: %035.llu $\n", ll);
	real_return = printf("Real  printf: %035.llu $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// Testing with multiple arguments
	ft_putendl("\n\n * * * * * Testing with multiple arguments:  * * * * *");

	ft_putendl("\nInput: %35u, %u and %llu");
	my_return = ft_printf("My ft_printf: %35u, %.5u and %llu $\n", b, a, ll);
	real_return = printf("Real  printf: %35u, %.5u and %llu $\n", b, a, ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.35u, %u and %llu");
	my_return = ft_printf("My ft_printf: %.35u, %25u and %llu $\n", b, a, ll);
	real_return = printf("Real  printf: %.35u, %25u and %llu $\n", b, a, ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ERROR TEST
	// ft_putendl("\n\n * * * * * Error test:  * * * * *");

	// ft_putendl("\nInput: %-0d");
	// ft_printf("My ft_printf: %+o $\n", a);
	// //printf("Real  printf: %-0d $\n", 0);





}

