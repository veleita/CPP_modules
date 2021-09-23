/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:14:43 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/23 17:05:49 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# define NUM_TYPES 4

# include <iostream>

class ScalarConverter
{
	private:

		std::string	_input;

		char		_charVal;
		int			_intVal;
		float		_floatVal;
		double		_doubleVal;

		void		(ScalarConverter::*_displayTypes[4])(void);

		ScalarConverter();				// Just for the sake of canonical form
		
		void	_displayChar();
		void	_displayInt();
		void	_displayFloat();
		void	_displayDouble();


	public:
	
		ScalarConverter(std::string input);
		ScalarConverter(ScalarConverter &copy);

		ScalarConverter &operator=(ScalarConverter const & rhs);

		std::string	getInput() const;
		void		setInput(std::string input);

		void		display();

		~ScalarConverter();
};

#endif
