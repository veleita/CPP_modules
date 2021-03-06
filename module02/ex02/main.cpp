/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zome </var/spool/mail/zome>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 20:16:10 by zome              #+#    #+#             */
/*   Updated: 2021/08/24 20:50:29 by zome             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed	a(6);
	Fixed	b(2.5f);
	Fixed	c(a);

	std::cout << "-------COMPARISON OPERATORS--------------------" << std::endl;
	std::cout << a << " > " << b << " ?  " << (a > b) << std::endl;
	std::cout << a << " < " << b << " ?  " << (a < b) << std::endl;
	std::cout << b << " >= " << c << " ?  " << (b >= c) << std::endl;
	std::cout << a << " <= " << c << " ?  " << (a <= c) << std::endl;
	std::cout << b << " == " << b << " ?  " << (b == b) << std::endl;
	std::cout << b << " != " << a << " ?  " << (b != a) << std::endl;
	std::cout << std::endl;

	std::cout << "-------ARITHMETIC OPERATORS--------------------" << std::endl;
	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << c << " = " << a * c << std::endl;
	std::cout << a << " / " << c << " = " << a / c << std::endl;
	std::cout << std::endl;

	std::cout << "-------INCREMENTAL/DECREMENTAL OPERATORS-------" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = "  << a++ << std::endl;
	std::cout << "a = "  << a << std::endl;
	std::cout << "++a = "  << ++a << std::endl;
	
	std::cout << "b = "  << b << std::endl;
	std::cout << "b-- = "  << b-- << std::endl;
	std::cout << "b = "  << b << std::endl;
	std::cout << "--b = "  << --b << std::endl;
	std::cout << std::endl;

	std::cout << "-------MIN/MAX FUNCTIONS-----------------------" << std::endl;
	std::cout << "Fixed::max(" << a << ", " << b << ") = " << Fixed::max(a, b) << std::endl;
	std::cout << "Fixed::min(" << a << ", " << b << ") = " << Fixed::min(a, b) << std::endl;
	std::cout << "max(" << a << ", " << b << ") = " << max(a, b) << std::endl;
	std::cout << "max(" << a << ", " << b << ") = " << min(a, b) << std::endl;
}
