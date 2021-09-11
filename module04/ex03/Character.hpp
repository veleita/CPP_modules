/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:11:10 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/11 19:37:42 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "Materia.hpp"
# include <iostream>

class ICharacter
{
	public:
		virtual	~ICharacter() {}

		virtual std::string const&	getName() const = 0;

//		virtual void 	equip(AMateria* m) = 0;
//		virtual void 	unequip(int idx) = 0;
//		virtual void 	use(int idx, ICharacter& target) = 0;
};


class Mage : public ICharacter
{
	private:
		std::string	_name;

	public:
		Mage();
		Mage(std::string name);
		Mage(Mage const &copy);

		Mage const & operator=(Mage const &);

		std::string const & getName(void) const;

		virtual	~Mage();
};

class Warrior : public ICharacter
{
	private:
		std::string	_name;

	public:
		Warrior();
		Warrior(std::string name);
		Warrior(Warrior const &copy);

		Warrior const & operator=(Warrior const &);

		std::string const & getName(void) const;

		virtual	~Warrior();
};

#endif
