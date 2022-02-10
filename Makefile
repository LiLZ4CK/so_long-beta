# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 03:21:34 by zwalad            #+#    #+#              #
#    Updated: 2022/02/10 00:46:31 by zwalad           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := so_long

CC := gcc

CFLAGS := -Wall -Wextra -Werror

RM = @rm -f

SRC := main.c \
		so_map.c\
		so_mapa.c\
		so_moves.c\
		so_player.c\
		so_walls.c\
		so_wallo.c\
		so_lib.c\
		./get_next_line/get_next_line.c\
		./get_next_line/get_next_line_utils.c\
		./ft_printf/ft_help.c\
		./ft_printf/ft_help2.c\
		./ft_printf/ft_printf.c\

OBJ := $(SRC:%.c=%.o)

LIB := libmlx.dylib

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIB) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all