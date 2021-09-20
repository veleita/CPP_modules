/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:06:12 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/20 18:28:46 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm : public AForm
{
	private:
    	std::string const	_target;
		virtual void		action() const;

	public:
    	RobotomyRequestForm();
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		
		RobotomyRequestForm &operator=(const RobotomyRequestForm&);
		
		virtual ~RobotomyRequestForm();
};

#endif
