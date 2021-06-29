#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string type;

public:
	Weapon(std::string announce = "hands");
	~Weapon();
	void setType(std::string type);
	std::string getType();
	void announce();
};

#endif