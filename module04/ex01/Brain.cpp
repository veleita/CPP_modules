/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 17:11:20 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/05 17:38:08 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
}

Brain::~Brain()
{
}

Brain& Brain::operator=(const Brain& rhs)
{
    for (int i = 0; i < 100; ++i)
    {
        this->setIdeas(i, rhs.getIdeas(i));
    }
    return *this;
}

bool Brain::checkIndex(int index) const
{
    if (index < 0 || index >= 100)
    {
        std::cerr << "The value of index is out of range." << std::endl;
        return false;
    }
    return true;
}

const std::string Brain::getIdeas(int index) const
{
    if (checkIndex(index))
    {
        return _ideas[index];
    }
    return 0;
}

void Brain::setIdeas(int index, const std::string str)
{
    if (checkIndex(index))
    {
		_ideas[index] = str;
    }
}
