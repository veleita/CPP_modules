/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 17:33:25 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 19:04:24 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
	private:
		AForm	*_formCatalogue[3];

	public:
		Intern();
		Intern(Intern const & copy);

		Intern const	&operator=(Intern const &rhs);

		AForm	*makeForm(std::string formName, std::string target);

		~Intern();
};

#endif
