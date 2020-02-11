##
## EPITECH PROJECT, 2019
## day10
## File description:
## Makefile
##

CC	=	ar rc

NAME	=	libmy.a

SRC	=	*.c

OBJ	=	*.o

all:	gcc compilation

gcc:
	gcc -c $(SRC)

compilation:
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:	clean
	rm -rf $(NAME)

re:	fclean all

.PHONY:	re all clean fclean