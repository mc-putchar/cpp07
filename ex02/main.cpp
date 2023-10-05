/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:36:05 by mcutura           #+#    #+#             */
/*   Updated: 2023/10/06 00:53:09 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int	main(void)
{
	Array<int>	intArr;
	std::cout << "Int array: " << intArr.size() << std::endl;

	Array<char>	charArr(42);
	charArr[0] = '0';
	std::cout << "CharArr: "<< charArr.size() << std::endl;

	Array<char> another(charArr);
	std::cout << another.size() << std::endl;
	another[0] = '*';
	std::cout << "ChArr[0]: " << charArr[0] << std::endl;
	std::cout << "another[0]: " << another[0] << std::endl;
	try
	{
		std::cout << "wrong: " << another[42] << std::endl;
	}
	catch (std::exception)
	{
		std::cout << "Index out of bounds" << std::endl;
	}
	return 0;
}
