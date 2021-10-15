/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   references.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 22:13:29 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 22:17:32 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main()
{
	int		number = 42;
	int*	numberPtr = &number;
	int&	numberRef = number;

	std::cout << number << " " << *numberPtr << " " << numberRef << std::endl;

	*numberPtr = 21;
	std::cout << number << std::endl;
	numberRef = 84;
	std::cout << number << std::endl;
}
