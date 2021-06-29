#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy
{
	private:
		int			hp;
		std::string	type;
		Enemy();
	public:

		Enemy(int hp, std::string const & type);
		virtual ~Enemy();
		Enemy(Enemy const & cp);
		Enemy & operator=(Enemy const & op);

		std::string getType() const;
		int getHP() const;
		virtual void takeDamage(int);
};

#endif