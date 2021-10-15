/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initlist0.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:54:01 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 16:39:07 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/initlist0.hpp"

Sample1::Sample1(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {

	std::cout << "Construct" << std::endl;
	std::cout << this->a1 << std::endl;
	std::cout << this->a2 << std::endl;
	std::cout << this->a3 << std::endl;
	return ;
}

Sample1::~Sample1()
{
	std::cout << "Destructor" << std::endl;
	return ;
}

int		main()
{
	Sample1 instance1('a', 42, 2.4 );
	Sample1 instance2('b', 43, 3.4 );
	return 0;
}
