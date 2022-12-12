# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/19 19:05:43 by matde-je          #+#    #+#              #
#    Updated: 2022/11/22 15:52:24 by matde-je         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES	= 	ft_printf.c	\
			ftargfunc.c	\
			ftbase.c	\
			ftlen.c		\
			ft_putnbr.c	\
			ftchar.c	\
			ftint.c		\
			ftu.c		\
			ftptr.c		\
			ftstr.c		\
			ftx.c		\
			ftxx.c		\
			ft_strlen.c	

NAME 	=	libftprintf.a
OBJECTS	=	$(SOURCES:.c=.o)
CC	=	gcc	-Wall -Wextra -Werror -I./

.c.o:
	$(CC) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
			ar rcs $(NAME) $(OBJECTS)

clean:		
			rm -f $(OBJECTS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:	all clean fclean re