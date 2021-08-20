/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 12:42:16 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/20 17:32:26 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string		_name;
		const Weapon	&_weapon;

	public:
		HumanA(std::string name, const Weapon &weapon);
		~HumanA();

		void	attack() const;
};

#endif
