#include "Zombie.hpp"

// Method definitions

void	Zombie::set_name(std::string new_name) { name = new_name; }

void	Zombie::announce(void) { std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl; }

// Desctructor
Zombie::~Zombie(void) { std::cout << name << " is done for good." << std::endl; }
