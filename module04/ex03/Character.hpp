/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:11:10 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/09 19:06:52 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

# include "AMateria.hpp"
# include <iostream>

class ICharacter
{
	public:
		virtual	~ICharacter() {}

		virtual std::string const&	getName() const = 0;

		virtual void 	equip(AMateria* m) = 0;
		virtual void 	unequip(int idx) = 0;
		virtual void 	use(int idx, ICharacter& target) = 0;
};

#endif;
