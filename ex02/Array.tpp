/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:43:46 by mcutura           #+#    #+#             */
/*   Updated: 2023/10/06 00:17:18 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
Array<T>::Array()
{
	arr = new T[0];
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int size) : _size(size)
{
	arr = new T[size]();
}

template <typename T>
Array<T>::Array(Array const &obj)
{
	_size = obj.size();
	arr = new T[_size];
	for (unsigned int it = 0; it < _size; ++ it)
		arr[it] = obj[it];
}

template <typename T>
Array<T> const & Array<T>::operator=(Array<T> const &rhs)
{
	if (*this != rhs)
	{
		delete[] arr;
		_size = rhs.size();
		arr = new T[_size];
		for (unsigned int it = 0; it < _size; ++ it)
			arr[it] = rhs[it];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete[] arr;
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
T Array<T>::operator[](unsigned int idx) const
{
	if (idx >= _size)
		throw std::exception();
	return *(arr + idx);
}

template <typename T>
T & Array<T>::operator[](unsigned int idx)
{
	if (idx >= _size)
		throw std::exception();
	return *(arr + idx);
}
