/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:57:36 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/23 19:39:59 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base * generate(void)
{
	std::srand(std::time(NULL));
	int randomizer = std::rand() % 3;
 
 	switch (randomizer)
    {
 	   case 0:
		   std::cout << "I generated an A" << std::endl;
		   return (new A());
    	case 1:
		   std::cout << "I generated a B" << std::endl;
		   return (new B());
    	case 2:
		   std::cout << "I generated a C" << std::endl;
		   return (new C());
    	default:
		   return NULL;
    }
}

void identify(Base* p)
{
	if (dynamic_cast <A*>(p))
		std::cout << "A";
	else if (dynamic_cast <B*>(p))
		std::cout << "B";
	if (dynamic_cast <C*>(p))
		std::cout << "C";
	std::cout << std::endl;
}

void identify(Base& p)
{
	try
	{
    	(void)dynamic_cast<A&>(p);
		std::cout << "A";
	}
	catch (std::bad_cast& bc) {}

	try
	{
    	(void)dynamic_cast<B&>(p);
		std::cout << "B";
	}
	catch (std::bad_cast& bc) {}

	try
	{
    	(void)dynamic_cast<C&>(p);
		std::cout << "C";
	}
	catch (std::bad_cast& bc) {}
}
