/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 16:55:08 by meghribe          #+#    #+#             */
/*   Updated: 2025/12/04 18:54:45 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

/*
 * Default color: green
 * but can be red, cyaan,, purple and yellow
 */
void	print_message_colored(std::string msg, std::string color)
{
	std::string	reset;

	if (color == "red")
		color = "\033[31m";
	else if (color == "cyan")
		color = "\033[36m";
	else if (color == "purple")
		color = "\033[35m";
	else if (color == "yellow")
		color = "\033[33m";
	else
		color = "\033[32m";
	reset = "\033[0m";
	std::cout << color << msg << reset << std::endl;
}

void	first_exercise_main(void)
{
	print_message_colored("DECLARATION AND INITIALIZATION OF VARIABLES", "purple");
	ClapTrap jaume;
	ClapTrap kilian("Kilian");
	ClapTrap guillem("Guillem");

	print_message_colored("TEST ATTACKS", "red");
	jaume.attack("Kilian");
	kilian.attack("Guillem");
	guillem.attack("Another ClapTrap");

	print_message_colored("TEST TAKE DAMAGE", "yellow");
	jaume.takeDamage(11);
	kilian.takeDamage(7);
	guillem.takeDamage(1);

	print_message_colored("TEST ATTACKS", "red");
	jaume.attack("Kilian");
	kilian.attack("Guillem");
	guillem.attack("Another ClapTrap");

	print_message_colored("TEST BE REPAIRED", "");
	jaume.beRepaired(10);
	kilian.beRepaired(10);
	guillem.beRepaired(10);

	print_message_colored("TEST BE REPAIRED AND ATTACK WITH 0 ENERGY", "cyan");
	kilian.beRepaired(10);
	kilian.beRepaired(10);
	kilian.beRepaired(10);
	kilian.beRepaired(10);
	kilian.beRepaired(10);
	kilian.beRepaired(10);
	kilian.beRepaired(10);
	kilian.beRepaired(10);
	kilian.beRepaired(10);
	kilian.attack("Guillem");
	print_message_colored("TEST BE REPAIRED AND ATTACK WITH 0 ENERGY AND 0 HIT POINTS", "red");
	guillem.beRepaired(10);
	guillem.beRepaired(10);
	guillem.beRepaired(10);
	guillem.beRepaired(10);
	guillem.beRepaired(10);
	guillem.beRepaired(10);
	guillem.beRepaired(10);
	guillem.takeDamage(100);
	guillem.attack("Kilian");
	guillem.beRepaired(10);

	print_message_colored("DESTRUCTION OF VARIABLES", "purple");
}

void	second_exercise_main(void)
{
	print_message_colored("DECLARATION AND INITIALIZATION OF VARIABLES", "purple");
	ClapTrap kilian;
	ScavTrap jaume;
	ScavTrap ayoub("Ayoub");
	ScavTrap sami("Sami");
	jaume = sami;

	print_message_colored("TEST ATTACKS", "red");
	ayoub.attack("Sami");
	sami.attack("Ayoub");
	kilian.attack("Sami");

	print_message_colored("TEST TAKE DAMAGE", "yellow");
	ayoub.takeDamage(100);
	sami.takeDamage(20);
	jaume.takeDamage(50);

	print_message_colored("TEST ATTACKS", "red");
	ayoub.attack("Sami");
	sami.attack("Ayoub");
	jaume.attack("Ayoub");
	
	print_message_colored("TEST BE REPAIRED", "");
	jaume.beRepaired(10);
	sami.beRepaired(10);
	kilian.beRepaired(10);

	print_message_colored("TEST BE REPAIRED AND ATTACK WITH 0 ENERGY", "cyan");
	for (int i = 0; i < 50 ; i++)
		sami.beRepaired(1);
	sami.attack("Ayoub");
	print_message_colored("TEST ATTACK WITH 0 HIT POINTS", "cyan");
	ayoub.takeDamage(200);
	ayoub.attack("Sami");
	print_message_colored("TEST BE REPAIRED AND ATTACK WITH 0 ENERGY AND 0 HIT POINTS", "red");
	sami.takeDamage(200);
	sami.attack("Ayoub");
	sami.beRepaired(1);
	sami.attack("Ayoub");

	print_message_colored("TEST GATE KEEPER MODE", "cyan");
	sami.guardGate();
	ayoub.guardGate();
	//kilian.guardGate(); // no member named 'guardGate' in 'ClapTrap'

	print_message_colored("DESTRUCTION OF VARIABLES", "purple");
}

int	main(void)
{
	first_exercise_main();
	print_message_colored("=================================================", "red");
	second_exercise_main();
	print_message_colored("=================================================", "red");
	print_message_colored("DECLARATION AND INITIALIZATION OF VARIABLES", "purple");
	ClapTrap gavi("Gavi");
	ScavTrap lamine("Lamine");
	FragTrap pedri("Pedri");

	print_message_colored("TEST ATTACKS", "red");
	gavi.attack("Sami");
	lamine.attack("Ayoub");
	pedri.attack("Sami");

	print_message_colored("TEST TAKE DAMAGE", "yellow");
	gavi.takeDamage(100);
	lamine.takeDamage(20);
	pedri.takeDamage(50);

	print_message_colored("TEST ATTACKS", "red");
	gavi.attack("Sami");
	lamine.attack("Ayoub");
	pedri.attack("Ayoub");
	
	print_message_colored("TEST BE REPAIRED", "");
	gavi.beRepaired(10);
	lamine.beRepaired(10);
	pedri.beRepaired(10);

	print_message_colored("TEST HIGH FIVES", "");
	pedri.highFivesGuys();
	print_message_colored("ANOTHER VARIABLES FRAGTRAP", "");
	FragTrap first("First");
	first.takeDamage(10000);
	first.attack("Lamine");
	FragTrap second;
	FragTrap third(first);
	FragTrap last;

	last = first;
	print_message_colored("DESTRUCTION OF VARIABLES", "purple");
	return (0);
}
