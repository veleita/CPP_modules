/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:06:36 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/10/04 17:40:20 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public AForm
{
	private:
    	std::string const	_target;
		virtual void		_action() const;

	public:
    	PresidentialPardonForm();
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		
		PresidentialPardonForm &operator=(const PresidentialPardonForm&);
		
		void	execute(Bureaucrat const &executor) const;
		
		virtual ~PresidentialPardonForm();
};

#endif
