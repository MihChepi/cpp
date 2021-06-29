NAME = phonebook

FLAGS = -Wall -Wextra -Werror

SRC = phonebook.cpp \
	  phonebook_utils.cpp

OBJ = $(SRC:%.cpp=%.o)

%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $(<:.cpp=.o)

.PHONY:  all clean fclean re

all: $(NAME) phonebook.hpp

$(NAME): $(OBJ)
			clang++ $(OBJ) -o $(NAME)

clean:
		 rm -f $(OBJ)

fclean:	clean
		 rm -f $(NAME)

re:		fclean all

