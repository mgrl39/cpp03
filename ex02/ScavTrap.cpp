/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:22:07 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/04 16:37:24 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(): ClapTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap with name '" << this->name << "' as parameter constructor called" << std::endl;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor for " << this->name << " called" << std::endl;
}


ScavTrap::ScavTrap(const ScavTrap& rhs): ClapTrap(rhs)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hit_points = rhs.hit_points;
		this->energy_points = rhs.energy_points;
		this->attack_damage = rhs.attack_damage;
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "Guard " << this->name << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	std::string	msg;
	bool	cannot_attack;

	cannot_attack = false;
	msg = "";
	if (this->hit_points == 0)
	{
		msg = "ScavTrap " + this->name + " can't ATTACK if it has no hit points (health)";
		cannot_attack = true;
	}
	if (this->energy_points == 0)
	{
		if (msg != "")
			msg += " and can't ATTACK if it has no energy points left";
		else
			msg = "ScavTrap " + this->name + " can’t ATTACK if it has no energy points left";
		cannot_attack = true;
	}
	if (cannot_attack)
	{
		std::cout << msg << std::endl;
		return ;
	}
	this->energy_points--;
	msg = "ScavTrap " + this->name + " attacks " + target + " using 1 enery point, causing ";
	std::cout << msg << this->attack_damage << " points of damage!" << std::endl;
}
