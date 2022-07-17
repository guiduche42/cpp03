/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillemetteduchateau <guillemetteduchat    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:02:34 by guillemette       #+#    #+#             */
/*   Updated: 2022/07/17 13:01:41 by guillemette      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap myClapTrap("Guigui");

	myClapTrap.attack("Enemy");
	myClapTrap.takeDamage(5);
	myClapTrap.beRepaired(-3);
	myClapTrap.takeDamage(5);
	myClapTrap.attack("Enemy");
	myClapTrap.attack("Enemy");
	myClapTrap.attack("Enemy");
	myClapTrap.attack("Enemy");
	myClapTrap.attack("Enemy");
	myClapTrap.attack("Enemy");
	myClapTrap.beRepaired(1);
	myClapTrap.getEnergyPoints();
	myClapTrap.beRepaired(1);
	myClapTrap.beRepaired(1);
}
