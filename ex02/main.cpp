/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:36:05 by mcutura           #+#    #+#             */
/*   Updated: 2024/05/10 17:53:19 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main(void)
{
	Array<int>	empty;
	std::cout << "Empty array size: " << empty.size() << std::endl;

	Array<int>	intArr(3);
	std::cout << "Int array size: " << intArr.size() << std::endl;
	std::cout << "Int array[0] (uninitialized): " << intArr[0] << std::endl;

	Array<char>	charArr(42);
	charArr[0] = '0';
	std::cout << "CharArr: "<< charArr.size() << std::endl;
	std::cout << "ChArr[0]: " << charArr[0] << std::endl;
	std::cout << "ChArr[1] (uninitialized): " << charArr[1] << std::endl;

	Array<char> another(charArr);
	std::cout << another.size() << std::endl;
	another[0] = '*';
	std::cout << "another size: " << another.size() << std::endl;
	std::cout << "another[0]: " << another[0] << std::endl;
	std::cout << "another[1] (uninitialized): " << another[1] << std::endl;
	try
	{
		std::cout << "wrong: " << another[42] << std::endl;
	}
	catch (std::exception)
	{
		std::cout << "Index out of bounds" << std::endl;
	}

	Array<char> copy(another);
	std::cout << "Copy of another size: " << copy.size() << std::endl
		<< "Copy[0]: " << copy[0] << std::endl
		<< "Changing the copied value to @" << std::endl;
	copy[0] = '@';
	std::cout << "Copy[0]: " << copy[0] << std::endl
		<< "another[0]: " << another[0] << std::endl;
	return 0;
}
