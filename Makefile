##
## EPITECH PROJECT, 2020
## ADM_palindrome_2019
## File description:
## Makefile
##

NAME = palindrome

SRC = 	src/main.c						\
		src/start.c						\
		src/params.c					\
		src/valid_params.c				\
		src/compute_palindrome.c		\
		src/utils.c						\

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Wshadow -Iinclude

LIB = -Llib/my -lmy

all: $(NAME)

$(NAME): $(OBJ)
		$(MAKE) -C lib/my
		$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
		$(RM) $(OBJ)
		$(MAKE) -C lib/my clean

fclean: clean
		$(MAKE) -C lib/my fclean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re