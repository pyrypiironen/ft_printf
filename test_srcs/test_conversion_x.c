/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_conversion_xX.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 18:01:38 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/29 18:01:39 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_conversion_x()
{


	unsigned int a = 846204;
	unsigned int b = 664;
	unsigned short h = 207;
	unsigned char hh = 'b';
	unsigned long l = 4294967295;
	unsigned long long ll = 18446744073709551615U;
	unsigned long long ll2 = 18446744073709551614U;
 	int real_return;
 	int my_return;
	unsigned int max = 4294967295;

	ft_putendl("\n\n * * * * * * * * * * UNSIGNED HEXADECIMAL - Conversion x and X:  * * * * * * * * * *\n");

	ft_putendl("Input: %x");
	my_return = ft_printf("My ft_printf: %x $\n", a);
	real_return = printf("Real  printf: %x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %012.9x");
	my_return = ft_printf("My ft_printf: %012.9x $\n", a);
	real_return = printf("Real  printf: %012.9x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.9x");
	my_return = ft_printf("My ft_printf: %.9x $\n", a);
	real_return = printf("Real  printf: %.9x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %09x");
	my_return = ft_printf("My ft_printf: %09x $\n", a);
	real_return = printf("Real  printf: %09x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %9.x");
	my_return = ft_printf("My ft_printf: %9.x $\n", a);
	real_return = printf("Real  printf: %9.x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %X");
	my_return = ft_printf("My ft_printf: %X $\n", a);
	real_return = printf("Real  printf: %X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %012.9X");
	my_return = ft_printf("My ft_printf: %012.9X $\n", a);
	real_return = printf("Real  printf: %012.9X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.9X");
	my_return = ft_printf("My ft_printf: %.9X $\n", a);
	real_return = printf("Real  printf: %.9X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %09X");
	my_return = ft_printf("My ft_printf: %09X $\n", a);
	real_return = printf("Real  printf: %09X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %9.X");
	my_return = ft_printf("My ft_printf: %9.X $\n", a);
	real_return = printf("Real  printf: %9.X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %9X");
	my_return = ft_printf("My ft_printf: %9X $\n", a);
	real_return = printf("Real  printf: %9X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ZERO INPUT
	ft_putendl("\n\n * * * * * Zero input:  * * * * *");

	ft_putendl("\nInput: %0x");
	my_return = ft_printf("My ft_printf: %0x $\n", 0);
	real_return = printf("Real  printf: %0x $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.8X");
	my_return = ft_printf("My ft_printf: %.8X $\n", 0);
	real_return = printf("Real  printf: %.8X $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#x");
	my_return = ft_printf("My ft_printf: %#x $\n", 0);
	real_return = printf("Real  printf: %#x $\n", 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// NEGATIVE INPUT
	ft_putendl("\n\n * * * * * Negative input: * * * * * (undefined behavior?)");

	ft_putendl("\nInput: %X");
	my_return = ft_printf("My ft_printf: %X $\n", -42);
	real_return = printf("Real  printf: %X $\n", -42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.8x");
	my_return = ft_printf("My ft_printf: %.8x $\n", -142);
	real_return = printf("Real  printf: %.8x $\n", -142);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// MAX UNSIGNED INT
	ft_putendl("\n\n * * * * * Max unsigned int:  * * * * *");

	ft_putendl("\nInput: %X");
	my_return = ft_printf("My ft_printf: %X $\n", max);
	real_return = printf("Real  printf: %X $\n", max);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %8.4x");
	my_return = ft_printf("My ft_printf: %8.4x $\n", max);
	real_return = printf("Real  printf: %8.4x $\n", max);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ADJUST LEFT
	ft_putendl("\n\n * * * * * Adjust left:  * * * * *");

	ft_putendl("\nInput: %-.8x");
	my_return = ft_printf("My ft_printf: %-.8x $\n", a);
	real_return = printf("Real  printf: %-.8x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-8x");
	my_return = ft_printf("My ft_printf: %-8x $\n", a);
	real_return = printf("Real  printf: %-8x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-X");
	my_return = ft_printf("My ft_printf: %-X $\n", a);
	real_return = printf("Real  printf: %-X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// HASH FLAG
	ft_putendl("\n\n * * * * * Hash flag:  * * * * *");

	ft_putendl("\nInput: %#x");
	my_return = ft_printf("My ft_printf: %#x $\n", a);
	real_return = printf("Real  printf: %#x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

		ft_putendl("\nInput: %#08x");
	my_return = ft_printf("My ft_printf: %#08x $\n", 42);
	real_return = printf("Real  printf: %#08x $\n", 42);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);


	ft_putendl("\nInput: %#.8x");
	my_return = ft_printf("My ft_printf: %#.8x $\n", a);
	real_return = printf("Real  printf: %#.8x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-12.8X");
	my_return = ft_printf("My ft_printf: %#-12.8X $\n", a);
	real_return = printf("Real  printf: %#-12.8X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-12X");
	my_return = ft_printf("My ft_printf: %#-12X $\n", a);
	real_return = printf("Real  printf: %#-12X $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#12x");
	my_return = ft_printf("My ft_printf: %#12x $\n", a);
	real_return = printf("Real  printf: %#12x $\n", a);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// LENGTH MODIFIERS
	ft_putendl("\n\n * * * * * Lengt modifiers:  * * * * *");

	ft_putendl("\nInput: %hx");
	my_return = ft_printf("My ft_printf: %hx $\n", h);
	real_return = printf("Real  printf: %hx $\n", h);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %hhx");
	my_return = ft_printf("My ft_printf: %hhx $\n", hh);
	real_return = printf("Real  printf: %hhx $\n", hh);
	if(my_return != real_return)
	 	printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %lx");
	my_return = ft_printf("My ft_printf: %lx $\n", l);
	real_return = printf("Real  printf: %lx $\n", l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %llX");
	my_return = ft_printf("My ft_printf: %llX $\n", ll);
	real_return = printf("Real  printf: %llX $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %llX");
	my_return = ft_printf("My ft_printf: %llX $\n", ll2);
	real_return = printf("Real  printf: %llX $\n", ll2);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// RANDOM TESTS
	ft_putendl("\n\n * * * * * Random tests:  * * * * *");

	ft_putendl("\nInput: %-35.25llx");
	my_return = ft_printf("My ft_printf: %-35.25llx $\n", ll);
	real_return = printf("Real  printf: %-35.25llx $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %035.llX");
	my_return = ft_printf("My ft_printf: %035.llX $\n", ll);
	real_return = printf("Real  printf: %035.llX $\n", ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ZERO PRECISION AND ZERO ARGUMENT
	ft_putendl("\n\n * * * * * Precision zero and argument value zero:  * * * * *");

	ft_putendl("\nInput: %#.x %#.0x");
	my_return = ft_printf("My ft_printf: %#.x %#.0x $\n", 0, 0);
	real_return = printf("Real  printf: %#.x %#.0x $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.x %.0x");
	my_return = ft_printf("My ft_printf: %.x %.0x $\n", 0, 0);
	real_return = printf("Real  printf: %.x %.0x $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: \n%5.x %5.0x");
	my_return = ft_printf("My ft_printf: %5.x %5.0x $\n", 0, 0);
	real_return = printf("Real  printf: %5.x %5.0x $\n", 0, 0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// Testing with multiple arguments
	ft_putendl("\n\n * * * * * Testing with multiple arguments:  * * * * *");

	ft_putendl("\nInput: %35x, %#x and %llX");
	my_return = ft_printf("My ft_printf: %35x, %#x and %llX $\n", b, a, ll);
	real_return = printf("Real  printf: %35x, %#x and %llX $\n", b, a, ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.35X, %#X and %llx");
	my_return = ft_printf("My ft_printf: %.35X, %#X and %llx $\n", b, a, ll);
	real_return = printf("Real  printf: %.35X, %#X and %llx $\n", b, a, ll);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: numbers 10 to 16");
	my_return = ft_printf("My ft_printf: %x, %x, %x, %x, %x, %x, %X, %X, %X, %X, %X, %X, $\n", 10, 11, 12, 13, 14, 15, 10, 11, 12, 13, 14, 15);
	real_return = printf("Real  printf: %x, %x, %x, %x, %x, %x, %X, %X, %X, %X, %X, %X, $\n", 10, 11, 12, 13, 14, 15, 10, 11, 12, 13, 14, 15);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);


}

