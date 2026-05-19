#include <string>
#include <iostream>

int	main(void)
{
	std::string	salute = "HI THIS IS BRAIN";
	std::string*	stringPTR = &salute;
	std::string&	stringREF = salute;

	std::cout << "The memory address of our salute string is " << stringPTR << ".\n";
	std::cout << "The memory address of our pointer to the string is " << &stringPTR << ".\n";
	std::cout << "The memory address of our reference to the string is " << &stringREF << ".\n\n";

	std::cout << "The value of our salute string is \"" << salute << "\".\n";
	std::cout << "The value pointed to by our pointer is \"" << *stringPTR << "\".\n";
	std::cout << "The value pointed to by our reference is \"" << stringREF << "\".\n";
	return (0);
}
