/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:05:16 by mcutura           #+#    #+#             */
/*   Updated: 2023/10/06 00:41:23 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void	iter(T const *addr, size_t size, void (*func)(T const))
{
	for (size_t it = 0; it < size; ++it)
		func(addr[it]);
}

template <typename T>
void	mc_putchar(T what)
{
	std::cout << "But of course: " << what << " $42$" << std::endl;
}
