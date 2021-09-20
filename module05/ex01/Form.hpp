/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 13:59:07 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/20 14:22:23 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form
{
	private:
		const std::string 	_name;
		const int			_gradeRequiredToSign;
		const int			_gradeRequiredToExec;
		bool				_isSigned;

	public:
		Form();
		Form(const std::string name, int grade);
		Form(Form const &copy);

		Form & operator=(Form const & rhs);

		std::string	getName() const;
		int			getGradeToSign() const;
		int			getGradeToExec() const;
		bool		getIsSigned() const;

		void		beSigned(Bureaucrat *bureaucrat);

		virtual	~Form();
};

std::ostream& operator<<(std::ostream& out, const Form &rhs);

#endif
