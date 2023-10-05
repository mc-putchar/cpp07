/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 22:51:46 by mcutura           #+#    #+#             */
/*   Updated: 2023/10/05 23:02:49 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T	min(T a, T b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T>
T	max(T a, T b)
{
	if (a > b)
		return a;
	return b;
}
