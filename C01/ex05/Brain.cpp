#include "Brain.hpp"

Brain::Brain(std::string freshness, std::string size)
{
	this->freshness = freshness;
	this->size = size;
}

Brain::~Brain()	{}

std::string Brain::identify() const
{
	std::stringstream	ss;

	ss << this;
	return ss.str();
}
