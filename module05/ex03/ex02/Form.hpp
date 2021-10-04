/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:59:07 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/21 16:43:52 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string 	_name;
		const std::string 	_target;
		const int			_gradeRequiredToSign;
		const int			_gradeRequiredToExec;
		bool				_isSigned;

	public:
		AForm();
		AForm(const std::string name, const std::string target,
				int gradeToSign, int gradeToExec);
		AForm(AForm const &copy);

		AForm & operator=(AForm const & rhs);

		std::string	getName() const;
		std::string	getTarget() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;
		bool		getIsSigned() const;

		void		beSigned(Bureaucrat const *bureaucrat);

		bool			canExecute(Bureaucrat const &executor) const;
		virtual void	execute(Bureaucrat const &executor) const = 0;
		
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

		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		virtual	~AForm();
};

std::ostream& operator<<(std::ostream& out, const AForm &rhs);

#endif
