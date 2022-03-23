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

NAME = libftprinf.a

FLAGS = -Wall -Wextra -Werror

HEADER = include/ft_printf.h

INCLUDES = -I includes -I .libft/libft.h

LIBFT = libft/libft.a
LIBFT_DIR = ./libft/
LIBFT_OBJS = ./libft/*.o

SRCS_DIR = srcs/
OBJS_DIR = obj/

SRCS = $(addprefix $(SRC_DIR),


all: $(NAME)

$(NAME): $(OBJS_DIR)
	@make -s -C $(LIBFT_DIR)
# @cp $(LIBFT) ./$(NAME)



	ranlib $(NAME)

$(OBJS_DIR):
	@mkdir $@

clean:

	@make clean -s -C $(LIBFT_DIR)

fclean:

	@make fclean -s -C $(LIBFT_DIR)

re: fclean all









.PHONY: all clean fclean re