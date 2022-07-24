/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guillemetteduchateau <guillemetteduchat    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:02:34 by guillemette       #+#    #+#             */
/*   Updated: 2022/07/24 12:43:21 by guillemette      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ClapTrap myClapTrap("Guigui");

	ScavTrap myScavTrap("Kiki");

	myScavTrap.guardGate();
	myScavTrap.attack("Target");
}
