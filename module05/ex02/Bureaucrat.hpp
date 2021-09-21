/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:26:01 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 17:13:04 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class AForm;

class Bureaucrat
{
	private:
		std::string	_name;
		int 		_grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat const &copy);

		Bureaucrat & operator=(Bureaucrat const & rhs);

		std::string	getName() const;
		int			getGrade() const;
		void		setGrade(int grade);

		void	incrementGrade();
		void	decrementGrade();
		
		void	signForm(AForm &doc) const;
		void	executeForm(AForm const & form) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw ();
		};

		virtual	~Bureaucrat();
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat &rhs);

#endif
