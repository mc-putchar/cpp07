/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcutura <mcutura@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 23:04:10 by mcutura           #+#    #+#             */
/*   Updated: 2023/10/05 23:33:07 by mcutura          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int	main(void)
{
	int		intArr[] = { 0, 1, 2, 3, 4, 5};
	char	charArr[] = {'a', 'b', 'c', 'f', 't', 'r'};
	double	doubleArr[] = {0.1, 0.2, 4.2, 0.42, 42.0};
	std::string	strArr[] = {"what", "is", "love", "baby", "dont"};

	iter<int>(intArr, sizeof(intArr) / sizeof(*intArr), &mc_putchar<int>);
	iter<char>(charArr, sizeof(charArr) / sizeof(*charArr), &mc_putchar<char>);
	iter<double>(doubleArr, sizeof(doubleArr) / sizeof(*doubleArr), &mc_putchar<double>);
	iter<std::string>(strArr, sizeof(strArr) / sizeof(*strArr), &mc_putchar<std::string>);
}
