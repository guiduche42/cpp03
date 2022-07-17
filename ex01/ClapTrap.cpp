/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduchate <gduchate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:02:41 by guillemette       #+#    #+#             */
/*   Updated: 2022/07/17 18:20:00 by gduchate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
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

int		ClapTrap::canTakeAction(void) const
{
	if (!this->_hitPoints)
	{
		std::cout << "ClapTrap " << this->_name << " doesn't have any hit points left and cannot take action." << std::endl;
		return (0);
	}
	if (!this->_energyPoints)
	{
		std::cout << "ClapTrap " << this->_name << " doesn't have any energy points left and cannot take action." << std::endl;
		return (0);
	}
	return (1);
}

void ClapTrap::attack(const std::string& target)
{
	if (!canTakeAction())
		return;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " point(s) of damage!" << std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->_hitPoints)
	{
		std::cout << "ClapTrap " << this->_name << " has already 0 hit point(s)." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " point(s) of damage!" << std::endl;
	if (amount > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints = this->_hitPoints - amount;
	std::cout << "ClapTrap " << this->_name << " has now " << this->_hitPoints << " hit point(s)." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!canTakeAction())
		return;
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " repairs itself: +" << amount << " hit point(s)! It has now " << this->_hitPoints << " hit point(s)." << std::endl;
}

/*
** --------------------------------- ACCESSORS ---------------------------------
*/
std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	std::cout << "ClapTrap " << this->_name << " has " << this->_hitPoints << " hit point(s)." << std::endl;
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	std::cout << "ClapTrap " << this->_name << " has " << this->_energyPoints << " energy point(s)." << std::endl;
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	std::cout << "ClapTrap " << this->_name << " attacks with damage of " << this->_attackDamage << " point(s)." << std::endl;
	return (this->_attackDamage);
}

/* ************************************************************************** */
