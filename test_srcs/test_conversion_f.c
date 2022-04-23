/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 14:45:05 by ppiirone          #+#    #+#             */
/*   Updated: 2022/04/12 14:45:07 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_conversion_f()
{
	int real_return;
	int my_return = 0;


	ft_putendl("\n\n * * * * * * * * * * DOUBLE - conversion fF:  * * * * * * * * * *\n");

	ft_putendl("\nInput: %.6f");
	my_return = ft_printf("My ft_printf: %.6f $\n", 4.71);
	real_return = printf("Real  printf: %.6f $\n", 4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.2f");
	my_return = ft_printf("My ft_printf: %.2f $\n", 4.666666);
	real_return = printf("Real  printf: %.2f $\n", 4.666666);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// FLAGS
	ft_putendl("\n\n * * * * * Flags:  * * * * *");

	ft_putendl("\nInput: % .3f");
	my_return = ft_printf("My ft_printf: % .3f $\n", 4.712345);
	real_return = printf("Real  printf: % .3f $\n", 4.712345);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+.6f");
	my_return = ft_printf("My ft_printf: %+.6f $\n", 4.712345);
	real_return = printf("Real  printf: %+.6f $\n", 4.712345);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0+25.6f");
	my_return = ft_printf("My ft_printf: %0+25.6f $\n", 4.71);
	real_return = printf("Real  printf: %0+25.6f $\n", 4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-+25.6f");
	my_return = ft_printf("My ft_printf: %-+25.6f $\n", 4.71);
	real_return = printf("Real  printf: %-+25.6f $\n", 4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-0+25.6f");
	my_return = ft_printf("My ft_printf: %-0+25.6f $\n", 4.71);
	real_return = printf("Real  printf: %-0+25.6f $\n", 4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#.0f");
	my_return = ft_printf("My ft_printf: %#.0f $\n", 4.71);
	real_return = printf("Real  printf: %#.0f $\n", 4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-12.0f");
	my_return = ft_printf("My ft_printf:  %#-12.0f $\n", 4.71);
	real_return = printf("Real  printf:  %#-12.0f $\n", 4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// NEGATIVE
	ft_putendl("\n\n * * * * * Negative:  * * * * *");

	ft_putendl("\nInput: % .3f");
	my_return = ft_printf("My ft_printf: % .3f $\n", -4.712345);
	real_return = printf("Real  printf: % .3f $\n", -4.712345);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+.6f");
	my_return = ft_printf("My ft_printf: %+.6f $\n", -4.712345);
	real_return = printf("Real  printf: %+.6f $\n", -4.712345);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0+25.6f");
	my_return = ft_printf("My ft_printf: %0+25.6f $\n", -4.71);
	real_return = printf("Real  printf: %0+25.6f $\n", -4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-+25.6f");
	my_return = ft_printf("My ft_printf: %-+25.6f $\n", -4.71);
	real_return = printf("Real  printf: %-+25.6f $\n", -4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-0+25.6f");
	my_return = ft_printf("My ft_printf: %-0+25.6f $\n", -4.71);
	real_return = printf("Real  printf: %-0+25.6f $\n", -4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-12.0f");
	my_return = ft_printf("My ft_printf:  %#-12.0f $\n", -4.71);
	real_return = printf("Real  printf:  %#-12.0f $\n", -4.71);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ZERO INPUT
	ft_putendl("\n\n * * * * * Zero input:  * * * * *");

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf: %f $\n", 0.0);
	real_return = printf("Real  printf: %f $\n", 0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0+25.6f");
	my_return = ft_printf("My ft_printf: %0+25.6f $\n", 0.0);
	real_return = printf("Real  printf: %0+25.6f $\n", 0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-+25.6f");
	my_return = ft_printf("My ft_printf: %-+25.6f $\n", 0.0);
	real_return = printf("Real  printf: %-+25.6f $\n", 0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %-0+25.6f");
	my_return = ft_printf("My ft_printf: %-0+25.6f $\n", 0.0);
	real_return = printf("Real  printf: %-0+25.6f $\n", 0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-12.0f");
	my_return = ft_printf("My ft_printf:  %#-12.0f $\n", 0.0);
	real_return = printf("Real  printf:  %#-12.0f $\n", 0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %#-12.0f");
	my_return = ft_printf("My ft_printf:  %#-12.0f $\n", -0.0);
	real_return = printf("Real  printf:  %#-12.0f $\n", -0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", -0.0);
	real_return = printf("Real  printf:  %f $\n", -0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %0 f ");
	my_return = ft_printf("My ft_printf: %0 f $\n", -0.0);
	real_return = printf("Real  printf: %0 f $\n", -0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+0f ");
	my_return = ft_printf("My ft_printf: %+0f $\n", -0.0);
	real_return = printf("Real  printf: %+0f $\n", -0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ROUNDING
	ft_putendl("\n\n * * * * * Rounding:  * * * * *");

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 0.1);
	real_return = printf("Real  printf:  %f $\n", 0.1);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 0.01);
	real_return = printf("Real  printf:  %f $\n", 0.01);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.3f");
	my_return = ft_printf("My ft_printf:  %.3f $\n", 0.0025);
	real_return = printf("Real  printf:  %.3f $\n", 0.0025);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.3f");
	my_return = ft_printf("My ft_printf:  %.3f $\n", 0.0035);
	real_return = printf("Real  printf:  %.3f $\n", 0.0035);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.3f");
	my_return = ft_printf("My ft_printf:  %.3f $\n", 2.0035);
	real_return = printf("Real  printf:  %.3f $\n", 2.0035);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 0.5);
	real_return = printf("Real  printf:  %f $\n", 0.5);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 1.5);
	real_return = printf("Real  printf:  %f $\n", 1.5);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.f");
	my_return = ft_printf("My ft_printf:  %.f $\n", 2.5000000);
	real_return = printf("Real  printf:  %.f $\n", 2.5000000);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.f");
	my_return = ft_printf("My ft_printf:  %.f $\n", 1.5000000);
	real_return = printf("Real  printf:  %.f $\n",  1.5000000);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 9.99999305);
	real_return = printf("Real  printf:  %f $\n", 9.99999305);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 9.9999985);
	real_return = printf("Real  printf:  %f $\n", 9.9999985);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 1444565444646.6465424242242);
	real_return = printf("Real  printf:  %f $\n",  1444565444646.6465424242242);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 2.55555450);
	real_return = printf("Real  printf:  %f $\n",  2.55555450);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %f");
	my_return = ft_printf("My ft_printf:  %f $\n", 9.9999995);
	real_return = printf("Real  printf:  %f $\n", 9.9999995);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.0f");
	my_return = ft_printf("My ft_printf:  %.0f $\n", 0.5);
	real_return = printf("Real  printf:  %.0f $\n", 0.5);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %+0f");
	my_return = ft_printf("My ft_printf:  %+0f $\n", -0.0);
	real_return = printf("Real  printf:  %+0f $\n",  -0.0);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// ROUNDING WITH LONG DOUBLE
	ft_putendl("\n\n * * * * * Rounding with long double:  * * * * *");

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 9.9999995l);
	real_return = printf("Real  printf:  %Lf $\n", 9.9999995l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 1444565444646.6465424242242l);
	real_return = printf("Real  printf:  %Lf $\n",  1444565444646.6465424242242l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 1444565444646.6465424000l);
	real_return = printf("Real  printf:  %Lf $\n",  1444565444646.6465424000l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", -1444565444646.6465424242242454654l);
	real_return = printf("Real  printf:  %Lf $\n",  -1444565444646.6465424242242454654l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 9.999994500045678l);
	real_return = printf("Real  printf:  %Lf $\n",  9.999994500045678l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 1.5555545l);
	real_return = printf("Real  printf:  %Lf $\n",  1.5555545l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);
		
	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 2.5555545l);
	real_return = printf("Real  printf:  %Lf $\n",  2.5555545l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);
	ft_putendl("\nInput: %.0Lf");
	my_return = ft_printf("My ft_printf:  %.0Lf $\n", -0.5l);
	real_return = printf("Real  printf:  %.0Lf $\n", -0.5l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %Lf");
	my_return = ft_printf("My ft_printf:  %Lf $\n", 18446744073709551615.42l);
	real_return = printf("Real  printf:  %Lf $\n",  18446744073709551615.42l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);


	ft_putendl("\nInput: %.35Lf");
	my_return = ft_printf("My ft_printf:  %.35Lf $\n", 42.123456789012345678901234567890l);
	real_return = printf("Real  printf:  %.35Lf $\n",  42.123456789012345678901234567890l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	ft_putendl("\nInput: %.35Lf");
	my_return = ft_printf("My ft_printf:  %.17Lf $\n", 42.123456789012345678901234567890l);
	real_return = printf("Real  printf:  %.17Lf $\n",  42.123456789012345678901234567890l);
	if(my_return != real_return)
		printf("My ft_printf return is %d, but it should be %d.\n", my_return, real_return);

	// SOME EXTRAS
	ft_putendl("\n\n * * * * * Some extra tests for hard cases:  * * * * *");

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
