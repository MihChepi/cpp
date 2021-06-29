NAME = ex02

HEADERS = Array.hpp

all: $(NAME) 

$(NAME): main.cpp $(HEADERS)
	clang++ -std=c++98 -Wall -Wextra main.cpp -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean all