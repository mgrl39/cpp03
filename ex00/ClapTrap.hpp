/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:19:13 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/04 11:27:12 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string			name;
		unsigned int		hit_points;
		unsigned int		energy_points;
		unsigned int		attack_damage;

	public:
		ClapTrap();
		ClapTrap(const std::string name);
		~ClapTrap();
		ClapTrap& operator=(const ClapTrap& rhs);
		ClapTrap(const ClapTrap &rhs);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
