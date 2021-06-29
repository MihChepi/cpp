NAME = megaphone

SRC = megaphone.cpp

FLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:%.cpp=%.o)

%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $(<:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
			clang++ $(OBJ) -o $(NAME)

clean:
		 rm -f megaphone.o

fclean:	clean
		 rm -f $(NAME)

re:		fclean all

.PHONY:  all clean fclean re
