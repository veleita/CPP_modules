/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:06:12 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/10/06 15:37:05 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public AForm
{
	private:
    	std::string const	_target;
		virtual void		_action() const;

	public:
    	RobotomyRequestForm();
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		
		RobotomyRequestForm &operator=(const RobotomyRequestForm&);
		
		void	execute(Bureaucrat const &executor) const;
		
		virtual ~RobotomyRequestForm();
};

#endif
