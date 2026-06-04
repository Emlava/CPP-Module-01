#include "Harl.hpp"

// Private methods
void	Harl::debug(void)
{
		std::cout << "This is a debugging message: diagnosis information would go here.\n";
		return ;
}

void	Harl::info(void)
{
		std::cout << "This is a message with extensive information.\n";
		return ;
}

void	Harl::warning(void)
{
		std::cout << "This is a message with a warning: be more careful next time.\n";
		return ;
}

void	Harl::error(void)
{
		std::cout << "This is an error message: critical information would go here.\n";
		return ;
}

// Public method
void	Harl::complain(std::string level)
{
		static std::string	identifier_array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		static void	(Harl::*method_pointers[4])(void) =
		{&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
		int	i = 0;

		while (level != identifier_array[i])
		{
			if (++i > 3)
			{
				std::cout << "There's no function with the given name.\n";
				return ;
			}
		}
		(this->*method_pointers[i])();

		return ;
}