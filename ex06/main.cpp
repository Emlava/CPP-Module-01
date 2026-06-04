#include "Harl.hpp"

const bool	find_selected_level(std::string level, std::string level_arr[4], int& i)
{
	while (i < 3)
	{
		if (level == level_arr[i])
			return (true);
		i++;
	}
	i = 0;
	return (false);
}

int	main(int ac, char *av[])
{
	Harl		harl_instance;
	std::string	level_arr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"}; // Maybe use an enum instead
	int			i;

	if (ac != 2)
		return (1);
	if (!find_selected_level(av[1], level_arr, i))
		return (2);
	switch (i)
	{
		case ()
	}
	harl_instance.complain(level);
	return (0);
}