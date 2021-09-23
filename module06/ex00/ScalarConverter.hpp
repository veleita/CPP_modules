/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConversion.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:14:43 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/23 13:19:02 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# define NUM_TYPES 4

typedef	bool	(scalarConverter::booleanFunctionTable)(void);

class scalarConverter
{
	private:

		std::string	const	_input;

		functionTable 	_typeIdentifiers[NUM_TYPES];

		int			_typeID;
		enum class	_dataTypes
		{
			typeChar,
			typeInt,
			typeFloat,
			typeDouble
		};
		
		char		_charVal;
		int			_intVal;
		float		_floatVal;
		double		_doubleVal;


		ScalarConverter();				// Just for the sake of canonical form
		
		int		_detectDataType();

		bool	_isChar() const;
		bool	_isInt() const;
		bool	_isFloat() const;
		bool	_isDouble() const;

		char	_getChar();
		int		_getInt();
		float	_getFloat();
		double	_getDouble();


	public:
	
		ScalarConverter(std::string input);
		ScalarConverter(ScalarConverter &copy);

		std::string	getInput();
		void		setInput(std::string input);

		void		makeConversions();
		void		display() const;

		class UnknownTypeException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};

		~ScalarConverter();
};

#endif
