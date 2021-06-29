NAME = replace

FLAGS = -Wall -Wextra -Werror

HEADER = replace.hpp

SRC = main.cpp

OBJ = $(SRC:%.cpp=%.o)

%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $(<:.cpp=.o)

.PHONY:  all clean fclean re

all: $(NAME) ${HEADER}

$(NAME): $(OBJ)
			clang++ $(OBJ) -o $(NAME)

clean:
		 rm -f $(OBJ)

fclean:	clean
		 rm -f $(NAME)

re:		fclean all

