/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 14:10:33 by bahaas            #+#    #+#             */
/*   Updated: 2021/08/09 16:19:23 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap one("foo");

	one.attack("bar");
	one.attack("bar");
	one.attack("bar");
	one.takeDamage(5);
	one.beRepaired(5);
	one.attack("bar");
	one.takeDamage(10);
}

