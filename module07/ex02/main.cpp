/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:44:52 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/27 19:22:56 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"


int main( void )
{
	std::cout << "CONSTRUCTORS" << std::endl;
	std::cout << "-------------------" << std::endl;

	Array<>			emptyArray;
	
	Array<std::string>	stringArray(3);
	Array<int>			intArray(3);
	Array<float>		floatArray(3);
	
	Array<std::string>	copyArray(stringArray);
	
	std::cout << std::endl;

	std::cout << "OPERATORS" << std::endl;
	std::cout << "-------------------" << std::endl;

	stringArray[0] = "bunny";
	stringArray[1] = "rabbit";
	stringArray[2] = "foo foo";
	for (int i = 0; i < 3; i++)
		std::cout << stringArray[i] << std::endl;

	std::cout << std::endl;

	std::cout << "MEMBER FUNCTION" << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << std::endl;

	std::cout << "DESTRUCTORS" << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << std::endl;

	return 0;
}
