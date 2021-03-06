/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/19 18:42:49 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/10/05 17:37:20 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat mister = Bureaucrat();
    std::cout << mister << std::endl;
    Form form = Form();
    std::cout << form << std::endl;
    form.beSigned(&mister);
    std::cout << form << std::endl;
	mister.signForm(form);
    std::cout << form << std::endl;

    Form important("very much important document", 20, 10);
    std::cout << important << std::endl;
	
	try
	{
		mister.signForm(important);
	}
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << form << std::endl;

    Bureaucrat boss("Amancio", 10);
    std::cout << boss << std::endl;
	boss.signForm(important);
    std::cout << important << std::endl;

    try
    {
        Form bad = Form("baaadddd", -1, 3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

	return (0);
}
