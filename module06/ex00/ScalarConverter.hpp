/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:14:43 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/22 18:43:27 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# define NUM_TYPES 4

typedef	void	(scalarConverter::*functionTable)(void);

class scalarConverter
{
	private:
		std::string	_input;
		char		_charVal;
		int			_intVal;
		float		_floatVal;
		double		_doubleVal;

		functionTable _typeIdentifiers[NUM_TYPES];

	public:
		ScalarConverter();
		ScalarConverter(std::string input);
		ScalarConverter(ScalarConverter &copy);

		std::string	getInput();

		void	Display();

		~ScalarConverter();
};

#endif
