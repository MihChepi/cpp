#include "Squad.hpp"

Squad::Squad() : unit(nullptr), unit_count(0)
{}

Squad::~Squad()
{
	delete_squad();
}

Squad::Squad(Squad const & cp)
{
	if (cp.getCount() != 0)
	{
		unit = new ISpaceMarine* [cp.getCount()];

		for (int i = 0; i < cp.getCount(); ++i)
			unit[i] = (cp.getUnit(i))->clone();
		unit_count = cp.getCount();
	}
}

Squad & Squad::operator=(Squad const & op)
{
	if (this != &op)
	{
		delete_squad();
		unit = op.clone_squad();
		unit_count = op.getCount();
	}
	return *this;
}

int	Squad::getCount() const 
{
	return unit_count;
}

ISpaceMarine*	Squad::getUnit(int num) const
{
	if (num >= 0 && num < unit_count)
		return unit[num];
	return nullptr;
}

int	Squad::push(ISpaceMarine* sm)
{
	ISpaceMarine**	tmp;
	int				num;

	num = 0;
	if (sm != nullptr && !is_in_squad(sm))
	{
		tmp = new ISpaceMarine* [unit_count + 1];
		while (num < unit_count)
		{
			tmp[num] = unit[num];
			num++;
		}
		tmp[num] = sm;
		delete [] unit;
		unit = tmp;
		unit_count += 1;
	}
	return unit_count;
}

bool	Squad::is_in_squad(ISpaceMarine* sm)
{
	if (sm != nullptr)
	{
		for (int i = 0; i < unit_count; ++i)
		{
			if (unit[i] == sm)
				return 1;
		}
	}
	return 0;
}

ISpaceMarine**	Squad::clone_squad() const
{
	ISpaceMarine**	tmp;

	tmp = nullptr;
	if (getCount() != 0)
	{
		tmp = new ISpaceMarine* [unit_count];
		for (int i = 0; i < unit_count; ++i)
			tmp[i] = unit[i]->clone();
	}
	return tmp;
}

void	Squad::delete_squad()
{
	if (unit != nullptr && unit_count > 0) 
	{
		for (int i = 0; i < unit_count; ++i)
		{
			if (unit[i] != nullptr)
				delete unit[i];
			unit[i] = nullptr;
		}
		delete [] unit;
		unit = nullptr;
	}
}
