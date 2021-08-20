/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 20:49:41 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/08/20 17:28:33 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(std::string const &type);
		~Weapon();

		void				setType(std::string const &type);
		std::string const	&getType(void) const;
};

#endif
