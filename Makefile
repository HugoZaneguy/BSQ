##
## EPITECH PROJECT, 2019
## delivery
## File description:
## Makefile
##

NAME	= bsq

CC	= gcc

RM	= rm -f

SRCS	= ./fs_open_file.c \
	  ./lib/my/my_putchar.c \
	  ./lib/my/my_putstr.c \
	  ./lib/my/my_strlen.c \
	  ./error_g.c \
	  ./bsq.c \
	  ./main.c

OBJS	= $(SRCS:.c=.o)

CFLAGS = -I ./include/
CFLAGS += -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./lib/my
	$(CC) $(OBJS) -o $(NAME) $(LDFLAGS) -g

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
