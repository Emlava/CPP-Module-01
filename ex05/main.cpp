#include "Harl.hpp"

int	main(void)
{
	std::string	level;
	Harl		harl_instance;

	while (level.empty())
	{
		std::cout << "Enter the level of the desired message: ";
		if (!getline(std::cin, level))
		{
			std::cout << '\n';
			return (1);
		}
	}
	harl_instance.complain(level);
	return (0);
}