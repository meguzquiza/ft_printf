# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meguzqui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/12 20:53:19 by meguzqui          #+#    #+#              #
#    Updated: 2024/05/12 21:28:08 by meguzqui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

PRINTF_SRCS	= ft_printf.c \
		  		funciones/ft_putchar.c \
				funciones/ft_putnumbers.c \
				funciones/ft_putpoint.c \
				funciones/ft_putstr.c

OBJS		= $(PRINTF_SRCS:.c=.o)

CC		= gcc
CFLAGS		= -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -f

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean: 
	@$(RM) $(OBJS)

fclean: 
	@$(RM) $(NAME) $(OBJS)

re: 	fclean all

.PHONY:		all clean  fclean re
