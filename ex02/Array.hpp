/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:36:36 by mcutura           #+#    #+#             */
/*   Updated: 2023/10/06 00:17:55 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int size);
		Array(Array const &obj);
		~Array();

		Array const &operator=(Array const &rhs);
		T operator[](unsigned int idx) const;
		T & operator[](unsigned int idx);

		unsigned int	size() const;

	private:
		unsigned int	_size;
		T				*arr;
};

#include "Array.tpp"
