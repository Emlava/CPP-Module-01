#include "str_replacement.hpp"

static void	replace_s1(std::string& line, std::string s1,
	size_t s1_position, std::string s2)
{
	// -Keep track of the position of s1
	do
	{
		// -If s2 is shorter than s1, remove the extra characters in s1
		if (s2.size() < s1.size())
		{
			line.erase(s1_position, s1.size() - s2.size());
			//
			std::cout << "Position of s1: " << s1_position << '\n';
			std::cout << "Characters to remove: " << s1.size() - s2.size() << '\n';
			std::cout << "Resulting line: " << line << '\n';
			//
		}
		// -Else if the position of the last character of line is less than the position of s1 + length of s2 - 1,
		// expand the string by the necessary characters
		else if (line.size() < s1_position + s2.size() - 1)
			line.resize(s1_position + s2.size() - 1);
		// -Replace s1 by s2
		line.replace(s1_position, s2.size(), s2);
		// -Look if there are any further instances of s1 in the string and repeat
		s1_position = line.find(s1);
	} while (s1_position != std::string::npos);

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