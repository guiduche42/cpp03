#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap " << this->_name << " created with constructor." << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyed." << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " has entered guard keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (!canTakeAction())
		return;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " with a special attack, causing " << this->_attackDamage << " point(s) of damage!" << std::endl;
	this->_energyPoints--;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
