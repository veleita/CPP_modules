/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:35:27 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/23 18:46:57 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>

typedef struct  s_data {
    int         iData;
    char        cData;
    bool        bData;
}               Data;

uintptr_t 	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif
