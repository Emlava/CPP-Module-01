#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
	 	// Constructor
		Zombie(void);
		void	set_name(std::string new_name);
		void	announce(void);
		// Destructor
		~Zombie(void);
};

/**** zombieHorde.cpp ****/
Zombie*	zombieHorde(int N, std::string name);

#endif
