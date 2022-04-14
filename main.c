/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:50:07 by ppiirone          #+#    #+#             */
/*   Updated: 2022/03/07 14:50:09 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_srcs/test.h"

int	is_negative(double nbr)
{
	unsigned long long	*ull;
	int					sign;
	double				zero;

	if (nbr > 0)
		return (0);
	if (nbr < 0)
		return (1);
	zero = nbr;
	ull = (unsigned long long*)&zero;
	sign = (int)(*ull >> 63);
	if (sign == 0)
		return (0);
	return (1);
	
}

int main()
{
	//test_conversion_di();
	//test_conversion_o();
	//test_conversion_u();
	//test_conversion_x();
	// test_conversion_c();
	//test_conversion_s();
	// test_conversion_p();
	// test_modulo();
	// test_asterix();
	//test_conversion_f();
	 //filechecker();


int a;
a = is_negative(-0.0);
printf("int a is %d\n", a);

}


// #include<stdio.h>
// int main()
// {

//     printf("Size of int: %d bytes\n", sizeof(int));
//     printf("Size of float: %d bytes\n", sizeof(float));
//     printf("Size of double: %d bytes\n", sizeof(double));
//     printf("Size of long double: %d bytes\n", sizeof(long double));
// 	 printf("Size of long long: %d bytes\n", sizeof(long long));
    
//     return 0;
// }