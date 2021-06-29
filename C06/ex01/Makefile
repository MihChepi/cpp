NAME = ex01

HEADERS = Data.hpp

all: $(NAME)

$(NAME): main.cpp Data.cpp $(HEADERS)
	clang++ -std=c++98 -Wall -Wextra -Werror main.cpp Data.cpp -o $(NAME)

clean:

fclean: clean
		rm -f $(NAME)

re: fclean all