NAME = ex02

HEADERS = Base.hpp ABC.hpp

all: $(NAME)

$(NAME): main.cpp Base.cpp $(HEADERS)
	clang++ -std=c++98 -Wall -Wextra  \
	 main.cpp Base.cpp -o $(NAME)

clean:

fclean: clean
		rm -f $(NAME)

re: fclean all