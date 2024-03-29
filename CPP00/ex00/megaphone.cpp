/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 17:52:31 by bahaas            #+#    #+#             */
/*   Updated: 2021/07/07 20:07:25 by bahaas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
  		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		int i = 1;
		while (i < ac)
		{
			int letter = 0;
			while(av[i][letter])
			{
				if (av[i][letter] >= 'a' && av[i][letter] <= 'z')
					av[i][letter] = av[i][letter] - 32;
				letter++;
			}
  			std::cout << av[i];
			i++;
		}
	}
  	std::cout << std::endl;
	return (0);
}
