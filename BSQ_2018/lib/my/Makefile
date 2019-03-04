##
## EPITECH PROJECT, 2018
## Makefile libmy
## File description:
## This is my Makefile for my lib
##

SRC	=	my_getnbr.c					\
		my_putstr.c					\
		my_strlen.c					\
		my_putchar.c				\
		my_strcmp.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+= -Wall -Wextra -I./../../include

NAME	=	libmy.a

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		rm -f *.o

all:	$(NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:		fclean all
