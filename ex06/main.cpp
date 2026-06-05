#include "Harl.hpp"

int	find_selected_level(std::string level, std::string (&level_arr)[4])
{
	int	i = 0;
	int	arr_size = sizeof(level_arr) / sizeof(level_arr[0]);

	while (i < arr_size)
	{
		if (level == level_arr[i])
			return (i);
		i++;
	}
	return (-1);
}

int	main(int ac, char *av[])
{
	Harl		harl_instance;
	std::string	level_arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i;

	if (ac != 2)
	{
		std::cout << "You need to enter one message level.\n";
		return (1);
	}
	i = find_selected_level(av[1], level_arr);
	switch (i)
	{
		case (0):
			while (i < 4)
				harl_instance.complain(level_arr[i++]);
			break ;
		case (1):	
			while (i < 4)
				harl_instance.complain(level_arr[i++]);
			break ;
		case (2):
			while (i < 4)
				harl_instance.complain(level_arr[i++]);
			break ;
		case (3):
			while (i < 4)
				harl_instance.complain(level_arr[i++]);
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
	// This could simply be done with one while loop just like the ones in each case,
	// but, alas, they asked for this.
	return (0);
}