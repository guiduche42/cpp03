/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillemetteduchateau <guillemetteduchat    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:02:34 by guillemette       #+#    #+#             */
/*   Updated: 2022/07/24 15:16:31 by guillemette      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap myClapTrap("Guigui");

	ScavTrap myScavTrap("Kiki");

	myScavTrap.guardGate();
	myScavTrap.attack("Target");

	FragTrap myFragTrap("Nina");
	myFragTrap.highFivesGuys();
	myFragTrap.beRepaired(5);
}
