# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmekonne <bmekonne@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/25 13:38:36 by bmekonne          #+#    #+#              #
#    Updated: 2026/02/15 14:20:52 by bmekonne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -I.

SRC = main.c \
	  Sort/Sort_Stack.c \
	  Sort/Sort_Three.c \
	  Sort/init_a_to_b.c \
	  Sort/int_b_to_a.c \
	  split.c \
	  stack_init.c \
	  stack_utilis.c \
	  error_handler.c \
	  operation/op_swap.c \
	  operation/op_push.c \
	  operation/rotate.c \
	  operation/rev_rotate.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
