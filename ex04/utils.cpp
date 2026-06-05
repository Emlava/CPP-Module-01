#include "str_replacement.hpp"

static void	replace_s1(std::string& line, std::string s1,
	size_t s1_position, std::string s2)
{
	do
	{
		line.erase(s1_position, s1.size());
		line.resize(line.size() + s2.size());
		line.insert(s1_position, s2);
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
