/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:14:43 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/22 18:28:28 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

class scalarConverter
{
	private:
		std::string	_input;
		char		_charVal;
		int			_intVal;
		float		_floatVal;
		double		_doubleVal;

	public:
		ScalarConverter();
		ScalarConverter(std::string input);
		ScalarConverter(ScalarConverter &copy);

		std::string	getInput();

		void	Display();

		~ScalarConverter();
};

#endif
