/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 17:11:49 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/19 20:29:16 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:
		Zombie(std::string name = "Deadman Zombie");
		~Zombie();
		void	announce(void);
		void	setName(std::string name);
};

Zombie* newZombie( std::string name );
void	randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif
