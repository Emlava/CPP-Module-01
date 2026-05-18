NAME = horde_test
CPPC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
OBJECTS = main.o Zombie.o zombieHorde.o

.PHONY: all clean fclean re

%.o: %.cpp
	$(CPPC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(CPPC) $(FLAGS) $(OBJECTS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
