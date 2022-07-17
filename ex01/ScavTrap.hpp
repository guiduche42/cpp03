#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : ClapTrap
{

	public:

		ScavTrap(std::string name);
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		// ScavTrap &		operator=( ScavTrap const & rhs );

		void	guardGate();
	private:

};

#endif /* ******************************************************** SCAVTRAP_H */