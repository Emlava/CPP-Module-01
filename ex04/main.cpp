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
	if (file.fail())
	{
		std::cout << "Failed to open " << av[1] << ".\n";
		return (2);
	}
	// Create <filename>.replace and copy the file into it
	std::fstream	file_copy(std::string(av[1]) + ".replace", std::fstream::out);

	if (file_copy.fail())
	{
		std::cout << "Failed to create a copy of " << av[1] << ".\n";
		return (3);
	}
	// Check for s1s in <filename>.replace and replace them with s2
	// -Use getline() to store the current line of file in a string variable
	// -Check for s1s in the string and, if there are any, replace them by s2s
	// -Append the string to file_copy

	return (0);
}