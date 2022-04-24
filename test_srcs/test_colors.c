/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_colors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 17:17:36 by ppiirone          #+#    #+#             */
/*   Updated: 2022/04/23 17:17:37 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	test_colors()
{
	int real_return = 0;
	int my_return = 0;
	int i = 0;
	//Head line
		ft_putendl("\n\n");
		ft_printf("{green}* ");
		ft_printf("{yellow}* ");
		ft_printf("{red}* ");
		ft_printf("{blue}* ");
		ft_printf("{purple}* ");
		ft_printf("{green}* ");
		ft_printf("{yellow}* ");
		ft_printf("{red}* ");
		ft_printf("{blue}* ");
		ft_printf("{purple}* ");
		ft_printf("{yellow}Colors:");
		ft_printf("{green} *");
		ft_printf("{yellow} *");
		ft_printf("{red} *");
		ft_printf("{blue} *");
		ft_printf("{purple} *");
		ft_printf("{green} *");
		ft_printf("{yellow} *");
		ft_printf("{red} *");
		ft_printf("{blue} *");
		ft_printf("{purple} *\n\n");
	//

	//ALL COLORS WITH STRING
	ft_printf("{green}Hello %s!\n", "world");
	ft_printf("{red}People like %s.\n", "colors");
	ft_printf("{yellow}So %s %s colors for you!\n", "here", "is");
	ft_printf("{blue}I hope %s enjoy!\n", "you");
	ft_printf("{black}Can %s see this one?\n", "you");
	ft_printf("{purple}Purple is %s of money.\n", "color");
	ft_printf("{blue}Do you know %s panthera uncia is?\n\n", "what animal");

	//DIFFERENT LENGTH MODIFIERS
	ft_printf("{yellow}Tests for different length modifiers:\n\n");

	ft_printf("{green}Testing int %d.\n", 42);
	ft_printf("{green}Testing octal %o.\n", 42);
	ft_printf("{green}Testing unsigned int %u.\n", 42);
	ft_printf("{green}Testing hexadecimal %x.\n", 42);
	ft_printf("{green}Testing double %f.\n\n", 42.42);


	//RETURN
	ft_printf("{yellow}Last test is check if returns is still ok (with two conversion):\n\n");
	
	my_return = ft_printf("{purple}Hello %s %s!\n", "world", "and universe");
	real_return = ft_printf("Hello %s %s!\n", "world", "and universe");
	
	ft_printf("{green}\nMy ft_printf returns %d and the real printf returns \ %d. \n" \
			, my_return, real_return);
	

	//FAKE TESTS
	ft_printf("{yellow}\nOne more fake test:\n\n");

	ft_printf("Testing something:\n");
	while (i < 15)
	{
		ft_printf("{green}[ OK ] [ OK ] [ OK ] [ OK ] [ OK ] [ OK ] [ OK ]");
		ft_printf("{green}[ OK ] [ OK ] [ OK ] [ OK ] [ OK ] [ OK ] [ OK ]");
		ft_printf("{green}[ OK ] [ OK ] [ OK ] [ OK ] [ OK ] [ OK ]\n");
		sleep(1);
		i++;
	}
	ft_printf("Passed 300/300 tests.\n");

}

