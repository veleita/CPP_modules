/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:42:49 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/20 16:41:27 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	mister("Ronald", 100);

	std::cout << mister << std::endl;
	mister.incrementGrade();
	std::cout << mister << std::endl;
	mister.decrementGrade();
	std::cout << mister << std::endl << std::endl;
	
	std::cout << "EXCEPTIONS TEST"  << std::endl << std::endl;
	try
    {
        mister.setGrade(-1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
		std::cout << mister << std::endl << std::endl;
    }

    try
    {
        mister.setGrade(160);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
		std::cout << mister << std::endl << std::endl;
    }

    try
    {
        mister.setGrade(150);
        mister.incrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
		std::cout << mister << std::endl << std::endl;
    }

    try
    {
        mister.setGrade(1);
        mister.decrementGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
		std::cout << mister << std::endl << std::endl;
    }

    try
    {
        Bureaucrat bad("baaad", 999);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl << std::endl;
    }

    try
    {
        Bureaucrat bad("baaad", -9);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl << std::endl;
    }

	return (0);
}
