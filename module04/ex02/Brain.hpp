/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 17:01:34 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/05 17:59:10 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
	
	private:
	    std::string _ideas[100];

	    bool 	checkIndex(int index) const;

	public:
    	Brain();
    	Brain(const Brain &copy);

    	Brain &operator=(const Brain &rhs);

    	const std::string getIdeas(int index) const;
    	void setIdeas(int index, const std::string str);
    	
		~Brain();
};

#endif
