#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(std::string name): _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src )
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

// ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
// {
// 	//if ( this != &rhs )
// 	//{
// 		//this->_value = rhs.getValue();
// 	//}
// 	return *this;
// }


/*
** --------------------------------- METHODS ----------------------------------
*/
void	ScavTrap::guardGate()
{
	std::cout << this->_name << " has entered guard keeper mode." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */