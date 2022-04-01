# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/07 14:40:45 by ppiirone          #+#    #+#              #
#    Updated: 2022/03/07 14:40:48 by ppiirone         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes

LIBFT = libft/libft.a
LIBFT_DIR = ./libft/

SRCS = srcs/*.c

OBJS = *.o
OBJS_DIR = objs/


all: $(NAME)

$(NAME):
	@make -s -C $(LIBFT_DIR)
	@cp $(LIBFT) ./$(NAME)
	@gcc $(FLAGS) -c $(SRCS) $(INCLUDES)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@mkdir $(OBJS_DIR)
	@mv *.o $(OBJS_DIR)
	@echo "Make successfully done."

clean:
	@rm -rf $(OBJS_DIR)
	@make clean -s -C $(LIBFT_DIR)
	@echo "Make clean successfully done."

fclean: clean
	@rm -f $(NAME) *.gch a.out
	@make fclean -s -C $(LIBFT_DIR)
	@echo "Make fclean successfully done."

re: fclean all

.PHONY: all clean fclean re
