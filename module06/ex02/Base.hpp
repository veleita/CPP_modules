/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:53:17 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/23 19:29:31 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base
{
	public:
		virtual ~Base() {};
};

class A: public Base {};
class B: public Base {};
class C: public Base {};


Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
