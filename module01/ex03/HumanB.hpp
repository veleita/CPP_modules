/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:44:27 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/20 16:36:49 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		_weapon;

	public:
		HumanB(std::string name = "Paco");
		~HumanB();

		void	setWeapon(Weapon weapon);
		void	attack();
};

#endif
