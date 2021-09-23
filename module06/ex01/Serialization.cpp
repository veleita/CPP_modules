/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 18:11:32 by mzomeno-          #+#    #+#             */
/*   Updated: 2021/09/23 18:37:49 by mzomeno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast <uintptr_t> (ptr));
}

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast <Data *> (raw));
}
