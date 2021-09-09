/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:02:32 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/09 19:07:20 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

# include "Character.hpp"
# include <iostream>

Class AMateria
{
	private:
		AMateria();

	protected:
		std::string	_type;
	
	public:
		AMateria(AMateria const & copy);
		AMateria(std::string const & type);

		AMateria &operator=(AMateria const &rhs);
	
		std::string const&	getType() const;

		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);

		~AMateria();
};

#endif
