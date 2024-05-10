/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:43:46 by mcutura           #+#    #+#             */
/*   Updated: 2024/05/10 17:46:29 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

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
	for (unsigned int it = 0; it < size; ++it)
		arr[it] = 0;
}

template <typename T>
Array<T>::Array(Array const &obj)
{
	_size = obj.size();
	arr = new T[_size];
	for (unsigned int it = 0; it < _size; ++it)
		arr[it] = obj[it];
}

template <typename T>
Array<T> const &Array<T>::operator=(Array<T> const &rhs)
{
	if (this != &rhs)
	{
		delete[] arr;
		_size = rhs.size();
		arr = new T[_size];
		for (unsigned int it = 0; it < _size; ++it)
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
T &Array<T>::operator[](unsigned int idx)
{
	if (idx >= _size)
		throw std::exception();
	return *(arr + idx);
}

#endif // ARRAY_TPP
