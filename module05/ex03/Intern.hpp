/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:33:25 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/10/06 17:48:43 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

# define NUM_FORMS 3


class Intern
{
	private:
		std::string	_formNames[NUM_FORMS];
		AForm		*(_formObjs(std::string))[NUM_FORMS];

	public:
		Intern();
		Intern(Intern const & copy);

		Intern const	&operator=(Intern const &rhs);

		AForm	*makeForm(std::string formName, std::string target);

		class FormNotFoundException : public std::exception
		{
			public:
				virtual const char *what() const throw ();
		};

		~Intern();
};

#endif
