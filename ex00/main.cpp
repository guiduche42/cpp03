/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduchate <gduchate@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:02:34 by guillemette       #+#    #+#             */
/*   Updated: 2022/07/17 18:16:44 by gduchate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap myClapTrap("Guigui");

	myClapTrap.attack("Enemy");
	myClapTrap.takeDamage(5);
	myClapTrap.beRepaired(3);
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
