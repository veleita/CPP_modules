/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:44:52 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/28 10:32:06 by mzomeno-         ###   ########.fr       */
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

	intArray[0] = 5;
	intArray[1] = 6;
	intArray[2] = 7;
	for (int j = 0; j < 3; j++)
		std::cout << intArray[j] << std::endl;
	std::cout << std::endl;

	floatArray[0] = 0.098f;
	floatArray[1] = 9.9985f;
	floatArray[2] = 654.7f;
	for (int k = 0; k < 3; k++)
		std::cout << floatArray[k] << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;

	std::cout << "MEMBER FUNCTION" << std::endl;
	std::cout << "-------------------" << std::endl;

	std::cout << stringArray.size() << std::endl;
	std::cout << intArray.size() << std::endl;
	std::cout << floatArray.size() << std::endl;

	return 0;
}
