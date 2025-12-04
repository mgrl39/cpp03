/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:22:07 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/04 15:07:48 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

/*
ScavTrap::~ScavTrap():
{
	std::cout << "ClapTrap Destructor for " << this->name << " called" << std::endl;
}*/

void	ScavTrap::guardGate()
{
	std::cout << "Guard " << this->name << " is now in Gate keeper mode" << std::endl;
}
