#include "str_replacement.hpp"

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "The program needs 3 arguments.\n";
		return (1);
	}
	// Open file for reading
	std::fstream	file;

	file.open(av[1], std::fstream::in);
	// Create <filename>.replace and copy the file into it
	// Check for s1s in <filename>.replace and replace them with s2
}