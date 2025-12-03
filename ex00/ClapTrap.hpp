/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:19:13 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/03 19:12:42 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define CANNOT_ATTACK \
	"ClapTrap can't do anything if it has no hit points or energy points left"

#include <iostream>

class ClapTrap
{
	private:
		std::string			name;
		unsigned int		hit_points;
		unsigned int		energy_points;
		unsigned int		attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& rhs);
		ClapTrap(const ClapTrap &rhs);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
