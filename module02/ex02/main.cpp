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

	std::cout << a << " > " << b << " ? " << (a > b) << std::endl;
	std::cout << a << " < " << b << " ? " << (a < b) << std::endl;
	std::cout << b << " >= " << c << " ? " << (b >= c) << std::endl;
	std::cout << a << " <= " << c << " ? " << (a <= c) << std::endl;
	std::cout << b << " == " << b << " ? " << (b == b) << std::endl;
	std::cout << b << " != " << a << " ? " << (b != a) << std::endl;

	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << c << " = " << a * c << std::endl;
	std::cout << a << " / " << c << " = " << a / c << std::endl;
}
