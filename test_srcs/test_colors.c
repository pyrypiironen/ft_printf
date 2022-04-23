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


	ft_printf("{green}Hello %s!\n", "world");
	ft_printf("{red}People like %s.\n", "colors");
	ft_printf("{yellow}So %s %s colors for you!\n", "here", "is");
	ft_printf("{blue}I hope %s enjoy!\n", "you");
	ft_printf("{black}Can %s see this one?\n", "you");
	ft_printf("{purple}Purple is %s of money.\n", "color");
	ft_printf("{blue}Do you know %s panthera uncia is?\n\n", "what animal");

	ft_printf("{yellow}Last test is check if returns is still ok:\n\n");
	
	my_return = ft_printf("{purple}Hello %s!\n", "world");
	real_return = ft_printf("Hello %s!\n", "world");
	
	ft_printf("{blue}\nMy ft_printf returns %d and the real printf returns \ %d. \n" \
			, my_return, real_return);

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

