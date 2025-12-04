/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:22:02 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/04 15:43:03 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		//ScavTrap(const std::string name);
		~ScavTrap();
		/*
		ScavTrap& operator=(const ScavTrap& rhs);
		ScavTrap(const std::string &rhs);
		ScavTrap(const ScavTrap &rhs);*/
		void guardGate();
};
