/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillemetteduchateau <guillemetteduchat    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:02:41 by guillemette       #+#    #+#             */
/*   Updated: 2022/07/15 23:07:27 by guillemette      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "Copy constructor called" << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	//if ( this != &rhs )
	//{
		//this->_value = rhs.getValue();
	//}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	//o << "Value = " << i.getValue();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void ClapTrap::attack(const std::string& target)
{
	if (!this->_energyPoints || !this->_hitPoints)
		return;
	std::cout << "ClapTrap " << this->_name << "attacks " << target << ", causing " << this->_attackDamage << "points of damage!" << std::endl;
	this->_energyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_energyPoints || !this->_hitPoints)
		return;
	if (amount > this->_hitPoints)
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << "doesn't have any hit points left." << std::endl;
		return;
	}
	else
		this->_hitPoints -= amount;
		std::cout << "ClapTrap " << this->_name << "looses: -" << amount << "! It has now " << this->_energyPoints << "hit points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_energyPoints || !this->_hitPoints)
		return;
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << "repairs itself: +" << amount << "! It has now " << this->_energyPoints << "hit points." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
