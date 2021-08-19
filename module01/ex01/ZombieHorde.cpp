/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 19:21:54 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/19 20:28:50 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie*	zombieHorde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		zombieHorde[i].setName(name);
	}

	return (&zombieHorde[0]);
}
