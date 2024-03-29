/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:10:33 by bahaas            #+#    #+#             */
/*   Updated: 2021/09/06 13:29:01 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap one("Clap");

	one.attack("foo");
	one.attack("foo");
	one.attack("foo");
	one.takeDamage(5);
	one.beRepaired(5);
	one.attack("foo");
	one.takeDamage(10);

	ScavTrap two("Scav");

	two.attack("foo");
	two.guardGate();
}

