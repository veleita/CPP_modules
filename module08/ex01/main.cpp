/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:08:37 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/30 13:31:31 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <vector>

int main()
{
	std::cout << "BASIC TEST" << std::endl;
	std::cout << "--------------------" << std::endl;
	Span sp = Span(5);
	
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "LIMIT TEST" << std::endl;
	std::cout << "--------------------" << std::endl;
	
	Span spLimits = Span(5);
	
	spLimits.addNumber(INT_MAX);
	spLimits.addNumber(INT_MIN);
	spLimits.addNumber(0);

	std::cout << spLimits.shortestSpan() << std::endl;
	std::cout << spLimits.longestSpan() << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "BIG TEST" << std::endl;
	std::cout << "--------------------" << std::endl;
	
	Span spBig = Span(10000);
	std::vector<int> vec1(5000, 2);
	std::vector<int> vec2(5000, 4);	
	try
	{
		spBig.addNumber(vec1.begin(), vec1.end());
		spBig.addNumber(vec2.begin(), vec2.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << spBig.shortestSpan() << std::endl;
	std::cout << spBig.longestSpan() << std::endl;	
	
	return (0);
}
