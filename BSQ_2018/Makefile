##
## EPITECH PROJECT, 2018
## Makefile libmy
## File description:
## This is my Makefile for my lib
##

SRC	=	main.c				\
		finder.c			\
		put_x.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	+= -g -Wall -Wextra -I./../../include

NAME	=	bsq

RED	=	\033[1m\033[38;2;164;0;0m

GREEN	=	\033[1m\033[38;2;100;245;0m

WHITE =	\033[0m

BLUE = \033[1m\033[38;2;0;0;170m

$(NAME):	$(OBJ)
		make -C ./lib/my
		gcc -o $(NAME) $(OBJ) -I"include" -L"lib/my" -lmy -O2
		rm -f *.o

all:	$(NAME)
		@printf " ----------------------------------\n"
		@printf " |$(BLUE)Compilation du Makefile réussie.$(WHITE)|\n"
		@printf " |$(BLUE)-> BINAIRE:$(WHITE) ./%s	          |\n" $(NAME)
		@printf " ----------------------------------\n"

clean:
		@rm -f $(OBJ)
		@printf "Les .o ont bien été supprimés.\n"

fclean:	clean
		@rm -f $(NAME)
		@printf "La/Le %s a été supprimé.\n" $(NAME)

re:		fclean all

%.o:	%.c
		@echo -en "${BLUE}$@${WHITE} "; $(CC) -c -o $@ $< ${CFLAGS}; if [ $$? -eq 0 ]; then echo -e "${GREEN}[OK]${WHITE}"; else echo -e "${RED}[ERROR]${WHITE}"; fi; echo;
