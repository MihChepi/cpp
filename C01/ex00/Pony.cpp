#include "Pony.hpp"

void Pony::setName(std::string name)		{this->name = name;}
void Pony::setColor(std::string color)		{this->color = color;}
void Pony::setAge(int age)					{this->age = age;}
void Pony::setTailLength(int tail_length)	{this->tail_length = tail_length;}

std::string Pony::getName()			{return (this->name);}
std::string Pony::getColor()		{return (this->color);}
std::string Pony::getAge()			{return (std::to_string(this->age));}
std::string Pony::getTailLength()	{return (std::to_string(this->tail_length));}

Pony::Pony(std::string name, std::string color, int age, int tail_lenght)
{
	Pony::setName(name);
	Pony::setColor(color);
	Pony::setAge(age);
	Pony::setTailLength(tail_lenght);
}

Pony::~Pony()
{
	std::cout << "class Pony deleted" << std::endl;
}
