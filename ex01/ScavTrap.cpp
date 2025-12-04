/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 14:22:07 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/04 14:33:58 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

void	ScavTrap::guardGate()
{
	std::cout << "Guard " << this->name << " is now in Gate keeper mode" << std::endl;
}
