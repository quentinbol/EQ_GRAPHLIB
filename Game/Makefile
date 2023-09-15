##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## true
##

NAME = bin

SRC += src/main.cpp
SRC += src/initialization/init_player.cpp
SRC += include/lib_graphic/my_get_sprite.cpp
SRC += include/lib_graphic/create_circle.cpp
SRC += include/lib_graphic/choose_color.cpp

CFLAGS = -I./include -W -Wextra -Wall #-Werror

OBJ = $(SRC:.cpp=.o)

CC = g++

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) -g -lsfml-graphics -lsfml-window -lsfml-system
	rm -f $(OBJ)
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

.SILENT: