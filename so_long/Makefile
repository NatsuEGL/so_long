# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/17 09:17:44 by akaabi            #+#    #+#              #
#    Updated: 2023/02/25 13:40:07 by akaabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = cc
CFLAGS = -Wall -Werror -Wextra
MLXF = -lmlx -framework OpenGL -framework AppKit
HEADER = src/so_long.h
HEADERB = my_bonus/so_long_bonus.h
SRC = src/main.c src/walls_check.c src/all_characters.c src/fill_window.c  src/put_image.c src/find_player.c src/ft_moves.c\
    get_next_line/get_next_line.c \
    get_next_line/get_next_line_utils.c\
    src/map_stack.c 
	
SRCB = my_bonus/main.c my_bonus/walls_check.c my_bonus/all_characters.c my_bonus/fill_window.c  my_bonus/put_image.c my_bonus/find_player.c my_bonus/ft_moves.c\
    get_next_line/get_next_line.c \
    get_next_line/get_next_line_utils.c\
    my_bonus/map_stack.c 
	
OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)

all :	$(NAME)


$(NAME) :	$(OBJ) $(HEADER) 
	$(CC) $(CFLAGS) $(SRC) $(MLXF) -o $(NAME)

bonus : $(OBJB) $(HEADERB) 
	$(CC) $(CFLAGS) $(SRCB) $(MLXF) -o $(NAME)

clean :
	@rm -rf $(OBJ) $(OBJB)
    
fclean : clean
	@rm -rf $(NAME) $(bonus)

re : fclean all

.PHONY: all fclean clean re 