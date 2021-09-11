/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:02:32 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/11 12:05:12 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

# include "Character.hpp"
# include <iostream>

class ICharacter;		// To avoid include errors

class AMateria
{
	private:
		AMateria() {};

	protected:
		std::string	_type;
	
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & copy);

		AMateria const &operator=(AMateria const &rhs);
	
		std::string const	&getType() const;

		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target) const;

		~AMateria() {};
};


class	Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &copy);

		Ice const &operator=(Ice const &rhs);
		
		AMateria	*clone() const;
		void 		use(ICharacter &target) const;

		virtual ~Ice() {};
};


class	Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &copy);

		Cure const &operator=(Cure const &rhs);
		
		AMateria	*clone() const;
		void 		use(ICharacter &target) const;

		virtual ~Cure() {};
};

#endif
