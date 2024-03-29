/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillemetteduchateau <guillemetteduchat    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:02:34 by guillemette       #+#    #+#             */
/*   Updated: 2022/07/24 15:20:40 by guillemette      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap myClapTrap("Guigui");

	ScavTrap myScavTrap("Kiki");

	myScavTrap.guardGate();
	myScavTrap.attack("Target");
	myClapTrap.attack("Target");
	std::string test=	myScavTrap.getName();
	std::cout << test << std::endl;
}
