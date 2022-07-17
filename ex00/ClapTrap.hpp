/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillemetteduchateau <guillemetteduchat    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:02:45 by guillemette       #+#    #+#             */
/*   Updated: 2022/07/17 12:56:12 by guillemette      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap(std::string name);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();

		ClapTrap &			operator=( ClapTrap const & rhs );
		//Accessors
		std::string			getName(void) const;
		unsigned int		getHitPoints(void) const;
		unsigned int		getEnergyPoints(void) const;
		unsigned int		getAttackDamage(void) const;
		//methods
		void 				attack(const std::string& target);
		void 				takeDamage(unsigned int amount);
		void 				beRepaired(unsigned int amount);
		int					canTakeAction(void) const;

	private:
		std::string			_name;
		unsigned int		_hitPoints;
		unsigned int		_energyPoints;
		unsigned int		_attackDamage;

};

		std::ostream &		operator<<( std::ostream & o, ClapTrap const & i );

#endif /* ******************************************************** CLAPTRAP_H */
