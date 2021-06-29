NAME = ex00

HEADERS = whatever.hpp

all: $(NAME) 

$(NAME): main.cpp whatever.hpp
	clang++ -std=c++98 -Wall -Wextra -Werror main.cpp -o $(NAME)

clean:

fclean: clean
		rm -f $(NAME)

re: fclean all