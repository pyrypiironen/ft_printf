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
INCLUDES = -I includes -I libft

LIBFT = libft/libft.a
LIBFT_DIR = ./libft/

SRCS_DIR = srcs/
OBJS_DIR = objs/

OBJS = $(SRCS: .c=.o)

# OBJS = $(addprefix $(OBJS_DIR), $(SRCS:srcs/%.c=%.o))
# #.c files from srcs/ creates .o files to objs/

SRCS = $(addprefix $(SRCS_DIR), *.c)


all: $(NAME)

$(NAME):
	@make -s -C $(LIBFT_DIR)
	@cp $(LIBFT) ./$(NAME)
	gcc $(FLAGS) $(SRCS) -c $(INCLUDES)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f *.o
	@make clean -s -C $(LIBFT_DIR)

fclean: clean
	rm -f $(NAME) *.gch a.out
	@make fclean -s -C $(LIBFT_DIR)

re: fclean all

.PHONY: all clean fclean re