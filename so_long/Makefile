# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/17 09:17:44 by akaabi            #+#    #+#              #
#    Updated: 2023/03/06 15:47:20 by akaabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
NAMEB = so_long_bonus
CC = cc
CFLAGS = -Wall -Werror -Wextra
MLXF = -lmlx -framework OpenGL -framework AppKit
HEADER = src/so_long.h
HEADERB = my_bonus/so_long_bonus.h
FT_PRINTF = ft_printff/
FT_PRINTF_H = ft_printff/ft_printf.h
FT_PRINTF_A = ft_printff/libftprintf.a
SRC = src/main.c src/walls_check.c src/all_characters.c src/fill_window.c  src/put_image.c src/find_player.c src/ft_moves.c src/for_norm.c src/map_tracking.c\
    get_next_line/get_next_line.c \
    get_next_line/get_next_line_utils.c\
    src/map_stack.c ft_printff/ft_printf.c \
	
SRCB = my_bonus/main.c my_bonus/walls_check.c my_bonus/all_characters.c my_bonus/fill_window.c  my_bonus/put_image.c my_bonus/find_player.c my_bonus/ft_moves.c my_bonus/some_utils.c my_bonus/for_norm.c my_bonus/monster_animation.c my_bonus/map_tracking_bonus.c\
    get_next_line/get_next_line.c \
    get_next_line/get_next_line_utils.c\
    my_bonus/map_stack.c ft_printff/ft_printf.c \
	
OBJ = $(SRC:.c=.o)
OBJB = $(SRCB:.c=.o)

all :	$(NAME)

$(NAME) :   $(OBJ) $(HEADER) $(FT_PRINTF_H)
	@make -s -C $(FT_PRINTF)
	$(CC) $(CFLAGS) $(SRC) $(FT_PRINTF_A) $(MLXF) -o $(NAME)
    
%.o : %.c $(HEADER) $(HEADERB)
	$(CC) $(CFLAGS) -c $< -o $@
    
bonus : $(OBJB) $(HEADERB) $(FT_PRINTF_H)
	@make -s -C $(FT_PRINTF)
	$(CC) $(CFLAGS) $(SRCB) $(FT_PRINTF_A) $(MLXF) -o $(NAMEB)

clean :
	@rm -rf $(FT_PRINTF)/*.o
	@rm -rf $(OBJ) $(OBJB)
    
fclean : clean
	@rm -rf $(FT_PRINTF)/*.o
	@rm -rf $(FT_PRINTF_A)
	@rm -rf $(NAME) $(NAMEB)

re : fclean all

.PHONY: all fclean clean re 