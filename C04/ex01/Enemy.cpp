#include "Enemy.hpp"

Enemy::Enemy()
{}

Enemy::Enemy(int hp, std::string const & type) : hp(hp), type(type)
{
		std::cout << "Enemy created!" << std::endl;
}

Enemy::~Enemy()
{
	std::cout << "Enemy destroyed!" << std::endl;
}
Enemy::Enemy(Enemy const & cp)
{
	hp = cp.hp;
	type = cp.type;
}

Enemy & Enemy::operator=(Enemy const & op)
{
	if (this != &op)
	{
		hp = op.hp;
		type = op.type;
	}
	return *this;
}

std::string Enemy::getType() const
{
	return type;
}

int Enemy::getHP() const
{
	return hp;
}

void Enemy::takeDamage(int dm)
{
	this->hp -= dm;
}