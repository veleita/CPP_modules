/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:06:12 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 18:51:44 by mzomeno-         ###   ########.fr       */
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
		
		AForm* 	clone() const;
		
		void	execute(Bureaucrat const &executor) const;
		
		virtual ~RobotomyRequestForm();
};

#endif
