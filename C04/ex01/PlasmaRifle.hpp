#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
private:
	
public:
	PlasmaRifle();
	~PlasmaRifle();
	PlasmaRifle(PlasmaRifle const & cp);
	PlasmaRifle & operator=(PlasmaRifle const & op);

	void attack() const;
};

#endif 
