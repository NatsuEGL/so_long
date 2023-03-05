# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 14:16:50 by akaabi            #+#    #+#              #
#    Updated: 2022/11/16 09:22:24 by akaabi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

SOURCE = ft_putchar.c \
		 ft_putstr.c \
		 ft_puthexa.c \
		 ft_putnbr.c  \
		 ft_putp.c \
		 ft_putunnbr.c \
		 ft_printf.c \

OBJECTS = $(SOURCE:.c=.o)

%.o : %.c ft_printf.h
	$(CC) $(CFLAGS) -c $<

$(NAME) : $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	$(RM) $(OBJECTS)

fclean: clean
	$(RM) $(NAME) 

re: fclean all 