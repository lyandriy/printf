# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lyandriy <lyandriy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 16:28:30 by lyandriy          #+#    #+#              #
#    Updated: 2022/12/17 20:30:27 by lyandriy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c\
	  ft_printf_utils_one.c\
	  ft_printf_utils_two.c

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME) : $(OBJ)
	ar -rsc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re