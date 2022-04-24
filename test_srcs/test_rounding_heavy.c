/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_rounding_heavy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 15:36:38 by ppiirone          #+#    #+#             */
/*   Updated: 2022/04/19 15:38:04 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_rounding_heavy()
{
	int real_return;
	int my_return = 0;
	double d;
	long double ld;


	ft_putendl("\n\n * * * * * * * * * * Heavy tests for rounding: * * * * * * * * * *\n");

	// BASICS
	ft_putendl("\n * * * * * BASICS -10 to 10 * * * * *");

	d = -10.5555545;
	ft_putendl("\nInput: %f");
	ft_putendl("Fractional: .5555545\n");
	while (d < 11)
	{
	my_return = ft_printf("My ft_printf: %f $\n", d);
	real_return = printf("Real  printf: %f $\n", d);
	ft_putendl("");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);
	d += 1;
	}

		// BASICS
	ft_putendl("\n\n * * * * * BASICS 10 to -10 * * * * *");

	d = 10.5555545;
	ft_putendl("\nInput: %f");
	ft_putendl("Fractional: .5555545\n");
	while (d > -11)
	{
	my_return = ft_printf("My ft_printf: %f $\n", d);
	real_return = printf("Real  printf: %f $\n", d);
	ft_putendl("");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);
	d -= 1;
	}

	// NINETEEN DIGITS AFTER DESIMAL POINT
	ft_putendl("\n\n * * * * * Nineteen digits after desimal point (-240 to 240 plus by 24) * * * * *");
	
	d = -240.5555555555555555545;
	ft_putendl("\nInput: %f");
	ft_putendl("Fractional: .5555555555555555545\n");
	while (d < 241)
	{
	my_return = ft_printf("My ft_printf: %f $\n", d);
	real_return = printf("Real  printf: %f $\n", d);
	ft_putendl("");
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);
	d += 24;
	}

	// SAME BACKWORDS
	ft_putendl("\n\n * * * * * Same backwords * * * * *");
	
	d = 240.5555555555555555545;
	ft_putendl("\nInput: %f");
	ft_putendl("Fractional: .5555555555555555545\n");
	while (d > -241)
	{
		my_return = ft_printf("My ft_printf: %f $\n", d);
		real_return = printf("Real  printf: %f $\n", d);
		ft_putendl("");
		if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);
		d -= 24;
	}

	// HARD: 15 DIGITS WITH PRECISION OF 17
	ft_putendl("\n\n * * * * * 15 digits with precision of 17 (4200 to -4200 minus by 420) * * * * *");
	d = 2400.555555555555545;
	ft_putendl("\nInput: %.18f");
	ft_putendl("Fractional: .555555555555545\n");
	while (d > -2401)
	{
		my_return = ft_printf("My ft_printf: %.16f $\n", d);
		real_return = printf("Real  printf: %.16f $\n", d);
		ft_putendl("");
		if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);
		d -= 240;
	}

	// LONG DOUBLE WITH PRECISION OF 17
	ft_putendl("\n\n * * * * * Long double with precision of 18 * * * * *");
	ld = -10.5555545l;
	ft_putendl("\nInput: %.17Lf");
	ft_putendl("Fractional: .5555545l\n");
	while (ld < 0)
	{
		my_return = ft_printf("My ft_printf: %.18Lf $\n", ld);
		real_return = printf("Real  printf: %.18Lf $\n", ld);
		ft_putendl("");
		if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);
		ld += 1;
	}

	// LONG DOUBLE WITH PRECISION OF 6
	ft_putendl("\n\n * * * * * Long double with precision of 6 * * * * *");
	ld = 10.5555545l;
	ft_putendl("\nInput: %Lf");
	ft_putendl("Fractional: .5555545l\n");
	while (ld > 0)
	{
		my_return = ft_printf("My ft_printf: %Lf $\n", ld);
		real_return = printf("Real  printf: %Lf $\n", ld);
		ft_putendl("");
		if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);
		ld -= 1;
	}

	// SOME SPECIFIC VALUES
	ft_putendl("\n\n * * * * * Some specific values * * * * *");

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 2.44999999999999l);
	real_return = printf("Real  printf:  %Lf $\n",  2.44999999999999l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.0Lf");
	my_return = ft_printf("My ft_printf:  %.0Lf $\n", 2.44999999999999l);
	real_return = printf("Real  printf:  %.0Lf $\n",  2.44999999999999l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.1Lf");
	my_return = ft_printf("My ft_printf:  %.1Lf $\n", 2.44999999999999l);
	real_return = printf("Real  printf:  %.1Lf $\n",  2.44999999999999l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#.0Lf");
	my_return = ft_printf("My ft_printf:  %#.0Lf $\n", 2.4999999999999l);
	real_return = printf("Real  printf:  %#.0Lf $\n",  2.4999999999999l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 2.44999999999999);
	real_return = printf("Real  printf:  %f $\n",  2.44999999999999);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.0f");
	my_return = ft_printf("My ft_printf:  %.0f $\n", 2.44999999999999);
	real_return = printf("Real  printf:  %.0f $\n",  2.44999999999999);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.1f");
	my_return = ft_printf("My ft_printf:  %.1f $\n", 2.44999999999999);
	real_return = printf("Real  printf:  %.1f $\n",  2.44999999999999);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#.0f");
	my_return = ft_printf("My ft_printf:  %#.0f $\n", 2.4999999999999);
	real_return = printf("Real  printf:  %#.0f $\n",  2.4999999999999);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

		ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 2.5000000l);
	real_return = printf("Real  printf:  %Lf $\n",  2.5000000l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 2.500001l);
	real_return = printf("Real  printf:  %Lf $\n",  2.500001l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 2.5000001l);
	real_return = printf("Real  printf:  %Lf $\n",  2.5000001l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 2.50000001l);
	real_return = printf("Real  printf:  %Lf $\n",  2.50000001l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 2.8801045124499999999l);
	real_return = printf("Real  printf:  %Lf $\n",  2.8801045124499999999l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);
	
	// SOME BIG VALUES WITH BIG PRECISION
	ft_putendl("\n\n * * * * * Some big values with big precision * * * * *");

	ft_putendl("\nInput: %.16Lf");
	my_return = ft_printf("My ft_printf:  %.16Lf $\n", 2147483647.8801045124499999999l);
	real_return = printf("Real  printf:  %.16Lf $\n",  2147483647.8801045124499999999l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.16Lf");
	my_return = ft_printf("My ft_printf:  %.16Lf $\n", -2147483647.8801045124499999999l);
	real_return = printf("Real  printf:  %.16Lf $\n",  -2147483647.8801045124499999999l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.16Lf");
	my_return = ft_printf("My ft_printf:  %.16Lf $\n", 52147483647.8801045124499999999l);
	real_return = printf("Real  printf:  %.16Lf $\n",  52147483647.8801045124499999999l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.16f");
	my_return = ft_printf("My ft_printf:  %.16f $\n", 2147477647.88990499999999);
	real_return = printf("Real  printf:  %.16f $\n",  2147477647.88990499999999);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.16f");
	my_return = ft_printf("My ft_printf:  %.16f $\n", 2147477647.880125512449999);
	real_return = printf("Real  printf:  %.16f $\n",  2147477647.880125512449999);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.16f");
	my_return = ft_printf("My ft_printf:  %.16f $\n", 52147477647.8802445124499999999);
	real_return = printf("Real  printf:  %.16f $\n",  52147477647.8802445124499999999);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);


}