#include "Zombie.hpp"

void	announce_and_kill_zombies(Zombie* zombies, int N)
{
	int	i = 0;

	std::cout << "\nAll zombies of the horde will now announce themselves:\n";
	while (i < N)
	{
		std::cout << "Zombie " << i + 1 << '\n';
		zombies[i].announce();
		i++;
	}
	std::cout << "\nNow let's kill them:\n";
	delete[] zombies;
	return ;
}

int	main(void)
{
	int		N = -1;
	std::string	name;
	Zombie*		zombies = NULL;

	std::cout << "Enter the number of zombies to be created: ";
	std::cin >> N;
	if (std::cin.fail() || N < 0)
	{
		std::cout << "Invalid input.\n";
		return (1);
	}
	if (N == 0)
	{
		std::cout << "No zombies to be created.\n";
		return (0);
	}
	std::cin.ignore(); // Ignores the trailing \n left in cin.
	
	while (name.empty())
	{
		std::cout << "Enter the name of the zombies: ";
		if (!std::getline(std::cin, name))
		{
			std::cout << '\n';
			return (2);
		}
	}
	std::cout << '\n';
	zombies = zombieHorde(N, name);
	if (!zombies)
	{
		std::cout << "Allocation failed.\n";
		return (3);
	}
	announce_and_kill_zombies(zombies, N);
	return (0);
}
