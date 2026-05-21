NAME = unnecessary_violence
CPPC = c++
FLAGS = -Wall -Werror -Wextra -std=c++98
OBJECTS = HumanA.o HumanB.o Weapon.o main.o

.PHONY: all clean fclean re

%.o: %.cpp
	$(CPPC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJECTS)
	$(CPPC) $(FLAGS) $(OBJECTS) -o $@

all: $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
