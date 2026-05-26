#include "str_replacement.hpp"

static void	replace_s1(std::string line, std::string s1,
	size_t s1_position, std::string s2)
{
	// Replace all instances of s1
	// Manage s2 being longer than s2 and exceding the end of the line

	// Approach:
	// -Keep track of the position of s1
	// -Use a method of string to remove s1 from line
	// -If the position of the last character of line is less than the former position of s1 + length of s2 - 1,
	// expand the string by the necessary characters
	// -Insert s2 in the former position of s1
	// -Look if there are any further instances of s1 in the string and repeat

	return ;
}

void	parse_file_and_write_file_copy(std::fstream& file,
	std::fstream& file_copy, std::string s1, std::string s2)
{
	std::string	line;
	size_t		s1_position;

	std::getline(file, line);
	while (!file.eof())
	{
		s1_position = line.find(s1);
		if (s1_position != std::string::npos)
			replace_s1(line, s1, s1_position, s2);
		file_copy << line << '\n';
		std::getline(file, line);
	}
	return ;
}