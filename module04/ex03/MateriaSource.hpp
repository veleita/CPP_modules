/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:26:08 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/19 17:41:47 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "Materia.hpp"

class IMateriaSource
{
	public:
		virtual void		learnMateria(AMateria*) = 0;
		virtual AMateria* 	createMateria(std::string const & type) = 0;

		virtual	~IMateriaSource() {}
};

class Grimoire : public IMateriaSource
{
	private:
		AMateria	*_materia[4];

	public:
		Grimoire();
		Grimoire(Grimoire const &copy);

		Grimoire const &operator=(Grimoire const &rhs);

		void		learnMateria(AMateria *newMateria);
		AMateria* 	createMateria(std::string const & type);

		virtual	~Grimoire();
};

#endif
