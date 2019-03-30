##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## makefile for pong
##

SRC = 	main.c \
		print_man.c \
		move_player.c \
		win_lose.c \
		error_management.c \
		my_get_nbr.c \
		print_funcs.c \
		sokoban.c

NAME = my_sokoban

CFLAGS = -Wall -Wextra -W

LIB	=	-lncurses

all:	$(NAME)

$(NAME):	$(OBJ)
			gcc -o $(NAME) $(SRC) $(CFLAGS) $(LIB)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
