/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 17:02:14 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 19:05:09 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
    	std::string const	_target;
		virtual void		_action() const;

	public:
    	ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm&);
		
		AForm* 	clone(std::string target) const;
		
		void	execute(Bureaucrat const &executor) const;
		
		virtual ~ShrubberyCreationForm();
};

#endif
