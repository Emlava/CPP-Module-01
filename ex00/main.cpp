#include "Zombie.hpp"

int	main(void)
{
	Zombie	*heap_zombie;

	std::cout << "Creating a zombie in the heap...\n";
	heap_zombie = newZombie("Tom");
	if (!heap_zombie)
	{
		std::cout << "Heap zombie creation failed.\nExiting.\n";
		return (1);
	}
	heap_zombie->announce();
	std::cout << "Success!\n\n";
	
	std::cout << "Creating a zombie in the stack (they will die right after their creation)...\n";
	randomChump("Patrick");
	std::cout << "\nNow let's get rid of Tom, our heap zombie...\n";
	heap_zombie->~Zombie();
	std::cout << "\nAll done. Bye!\n";
	return (0);
}
