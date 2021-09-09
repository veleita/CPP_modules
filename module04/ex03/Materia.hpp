/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 18:02:32 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/09 18:58:51 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP
# define MATERIA_HPP

Class AMateria
{
	protected:
		std::string	_type;
	
	public:
		AMateria(std::string const & type);
	
		std::string const&	getType() const;

		virtual AMateria* 	clone() const = 0;
		virtual void 		use(ICharacter& target);
};

#endif
