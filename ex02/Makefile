NAME = salute_info
CPPC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
SOURCE = main.cpp
OBJECT = main.o

.PHONY: all clean fclean re

$(NAME): $(OBJECT)
	$(CPPC) $(FLAGS) $(OBJECT) -o $(NAME)

$(OBJECT):
	$(CPPC) $(FLAGS) -c $(SOURCE) -o $(OBJECT)

all: $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all
