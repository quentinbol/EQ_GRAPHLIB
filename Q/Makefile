##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## true
##

NAME = EQ_Graphlib

SRC += main.cpp
SRC += Create_Form/create_circle.cpp

CFLAGS = -I./include -W -Wextra -Wall -Werror

GRAPHLIB = -lsfml-graphics -lsfml-window -lsfml-system

OBJ = $(SRC:.cpp=.o)

CC = g++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -g $(GRAPHLIB)
	@echo -e "\033[1;32m[$(NAME)]: Compiled !\033[0m"
	@echo -e "\033[1;32mCompiled $(shell echo "$?" | wc -w) file(s)\033[0m"

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@echo -e "\033[1;36m[$(NAME)]: All cleaned !\033[0m"

fclean: clean
	rm -f $(NAME)

re: fclean all

test_clean :
	rm -f *.gcno
	rm -f *.gcda
	rm units_test

.PHONY: clean fclean re test test_clean
