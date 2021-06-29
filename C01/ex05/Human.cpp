#include "Human.hpp"

Human::Human() : brain(Brain())
{}

Human::~Human() {}

std::string Human::identify()
{
	return this->brain.identify();
}

Brain	&Human::getBrain() const
{
	return (Brain &)this->brain;
}