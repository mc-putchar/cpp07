/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:36:36 by mcutura           #+#    #+#             */
/*   Updated: 2024/05/10 17:37:48 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>

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

# include "Array.tpp"

#endif // ARRAY_HPP
