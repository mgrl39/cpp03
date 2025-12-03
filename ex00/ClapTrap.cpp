/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:19:20 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/03 16:57:19 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): name("Default"), hit_points(10), energy_points(10), attack_damage(0)
{
		std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hit_points(10), energy_points(10), attack_damage(0)
{
		std::cout << "ClapTrap with name parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs): name(rhs.name), hit_points(rhs.hit_points), energy_points(rhs.energy_points), attack_damage(rhs.attack_damage)
{
		std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
		std::cout << "Copy assignment operator called" << std::endl;
		if (this != &rhs)
		{
				this->name = rhs.name;
		}
		return (*this);
}
