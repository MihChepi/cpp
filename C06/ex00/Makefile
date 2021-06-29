NAME = ex00

all: $(NAME) 


$(NAME): main.cpp
	clang++ -std=c++98 -Wall -Wextra -Werror main.cpp -o $(NAME)

clean:

fclean: clean
		rm -f $(NAME)

re: fclean all