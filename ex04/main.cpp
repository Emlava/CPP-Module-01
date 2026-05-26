#include "str_replacement.hpp"

int	main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cout << "The program needs 3 arguments.\n";
		return (1);
	}
	std::fstream	file;

	file.open(av[1], std::fstream::in);
	if (file.fail())
	{
		std::cout << "Failed to open " << av[1] << ".\n";
		return (2);
	}
	std::fstream	file_copy(std::string(av[1]) + ".replace", std::fstream::out);

	if (file_copy.fail())
	{
		std::cout << "Failed to create second file.\n";
		return (3);
	}
	parse_file_and_write_file_copy(file, file_copy, av[2], av[3]);
	file.close();
	file_copy.close();

	return (0);
}