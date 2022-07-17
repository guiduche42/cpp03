#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>

class FragTrap
{

	public:

		FragTrap();
		FragTrap( FragTrap const & src );
		~FragTrap();

		FragTrap &		operator=( FragTrap const & rhs );

	private:

};

#endif /* ******************************************************** FRAGTRAP_H */