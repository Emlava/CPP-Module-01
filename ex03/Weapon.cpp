#include "Weapon.hpp"

Weapon::Weapon(std::string value) { type = value; }

std::string&	Weapon::getType(void) { return type; }

void		Weapon::setType(std::string value) { type = value; }
