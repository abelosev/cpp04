NAME = ex01
CC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
INC = -I.

SRC = Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		main.cpp \
		Brain.cpp

OBJ = $(SRC:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(FLAGS) $(INC) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) $(INC) -c $< -o $@

clean :
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re