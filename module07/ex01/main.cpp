/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 19:44:52 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/27 15:34:02 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"


template< typename T >
void	print( T const & x )
{
	std::cout << x << std::endl;
}


int main( void )
{
	std::string	strArray[] = { 
		"don't smile at me", 
		"happier than ever", 
		"when we fall asleep where do we go"
	};
	iter<std::string, void>( strArray, 3, print<std::string> );

	int	intArray[] = { 2017, 2021, 2019 };
	iter<int, void>( intArray, 3, print<int> );

	float	floatArray[] = { 9.8f, 8.5, 8.8 };
	iter<float, void>( floatArray, 3, print<float> );



	return 0;
}
