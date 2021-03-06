/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:11:10 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/18 12:35:03 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

class	AMateria;
# include "Materia.hpp"
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


class Mage : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];

	public:
		Mage();
		Mage(std::string name);
		Mage(Mage const &copy);

		Mage const & operator=(Mage const &);

		std::string const & getName(void) const;

		virtual void 	equip(AMateria* m);
		virtual void 	unequip(int idx);
		virtual void 	use(int idx, ICharacter& target);

		virtual	~Mage();
};

class Warrior : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];

	public:
		Warrior();
		Warrior(std::string name);
		Warrior(Warrior const &copy);

		Warrior const & operator=(Warrior const &);

		std::string const & getName(void) const;
	
		virtual void 	equip(AMateria* m);
		virtual void 	unequip(int idx);
		virtual void 	use(int idx, ICharacter& target);

		virtual	~Warrior();
};

#endif
