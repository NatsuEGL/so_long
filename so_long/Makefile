# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/17 09:17:44 by akaabi            #+#    #+#              #
#    Updated: 2023/02/24 22:53:53 by akaabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc
CFLAGS = -Wall -Werror -Wextra
MLXF = -lmlx -framework OpenGL -framework AppKit
HEADER = src/so_long.h
SRC = src/main.c src/walls_check.c src/all_characters.c src/fill_window.c  src/put_image.c src/find_player.c src/ft_moves.c\
    get_next_line/get_next_line.c \
    get_next_line/get_next_line_utils.c\
    src/map_stack.c 
	
OBJ = $(SRC:.c=.o)
OFILES := $(CFILES:.c=.o)

all :	$(NAME)

$(NAME) :	$(OBJ) $(HEADER) 
	$(CC) $(CFLAGS) $(SRC) $(MLXF) -o $(NAME)

clean :
	@rm -rf $(OBJ)
    
fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all fclean clean re 