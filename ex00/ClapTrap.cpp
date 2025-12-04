/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:19:20 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/04 15:41:15 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

ClapTrap::ClapTrap(): name("Default"), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name): name(name), hit_points(10), energy_points(10), attack_damage(0)
{
	std::cout << "ClapTrap with name '" << this->name << "' as parameter constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor for " << this->name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs): 
	name(rhs.name), 
	hit_points(rhs.hit_points), 
	energy_points(rhs.energy_points), 
	attack_damage(rhs.attack_damage)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
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
	bool	cannot_attack;

	cannot_attack = false;
	msg = "";
	if (this->hit_points == 0)
	{
		msg = "ClapTrap " + this->name + " can't ATTACK if it has no hit points (health)";
		cannot_attack = true;
	}
	if (this->energy_points == 0)
	{
		if (msg != "")
			msg += " and can't ATTACK if it has no energy points left";
		else
			msg = "ClapTrap " + this->name + " can’t ATTACK if it has no energy points left";
		cannot_attack = true;
	}
	if (cannot_attack)
	{
		std::cout << msg << std::endl;
		return ;
	}
	this->energy_points--;
	msg = "ClapTrap " + this->name + " attacks " + target + " using 1 enery point, causing ";
	std::cout << msg << this->attack_damage << " points of damage!" << std::endl;
}

/*
 * takeDamage is not an action that ClapTrap does, it's a thing that can happen to him.
 * That's why "Attacking and Repairing each cost 1", but not takeDamage.
 */
void	ClapTrap::takeDamage(unsigned int amount)
{ 
	if (((int)this->hit_points - (int)amount) < 0)
		this->hit_points = 0;
	else
		this->hit_points -= amount;
	std::cout << "ClapTrap " << this->name + " takes " << amount << " damage (actual hit points: " << this->hit_points << ", actual energy points: " << this->energy_points << ")" << std::endl;
}

void 	ClapTrap::beRepaired(unsigned int amount)
{
	std::string	msg;
	bool	cannot_repair;

	cannot_repair = false;
	msg = "";
	if (this->hit_points == 0)
	{
		msg = "ClapTrap " + this->name + " can't REPAIR ITSELF if it has no hit points (health)";
		cannot_repair = true;
	}
	if (this->energy_points == 0)
	{
		if (msg != "")
			msg += " and can't REPAIR ITSELF if it has no energy points left";
		else
			msg = "ClapTrap " + this->name + " can’t REPAIR ITSELF if it has no energy points left";
		cannot_repair = true;
	}
	if (cannot_repair)
	{
		std::cout << msg << std::endl;
		return ;
	}
	this->energy_points--;
	this->hit_points += amount;
	std::cout << "ClapTrap " << this->name + " regains " << amount << " hit points (actual hit points: " << this->hit_points << ", actual energy points: " << this->energy_points << ")" << std::endl;
}
