#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		void	set_name(std::string new_name);
		void	announce(void);
		// Destructor
		~Zombie(void);
};

/**** newZombie.cpp ****/
Zombie*	newZombie(std::string name);

/**** randomChump.cpp ****/
void	randomChump(std::string name);

#endif
