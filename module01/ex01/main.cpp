/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:34:01 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/19 20:31:01 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombies = zombieHorde(4, "the dude");

	zombies[0].announce();
	zombies[1].announce();
	zombies[2].announce();
	zombies[3].announce();

	delete [] zombies;
}
