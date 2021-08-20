/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:42:16 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/20 16:34:59 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon		_weapon;

	public:
		HumanA(std::string name, Weapon weapon);
		~HumanA();

		void	attack();
};

#endif
