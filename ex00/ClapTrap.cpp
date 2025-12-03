/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:19:20 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/03 19:34:39 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(): name("Default"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap with name parameter constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor for " << this->name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs): 
	name(rhs.name), 
	hit_points(rhs.hit_points), 
	energy_points(rhs.energy_points), 
	attack_damage(rhs.attack_damage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hit_points = rhs.hit_points;
		this->energy_points = rhs.energy_points;
		this->attack_damage = rhs.attack_damage;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	std::string	msg;

	if (this->hit_points != 0 && this->energy_points != 0)
	{
		msg = "ClapTrap " + this->name + " attacks " + target + ", causing";
		std::cout << msg << (int)this->attack_damage << std::endl << " points of damage!";
		this->energy_points--;
	}
	else 
		std::cout << CANNOT_ATTACK << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	(void)amount;
}

