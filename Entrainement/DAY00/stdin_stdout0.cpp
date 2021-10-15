/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdin_stdout0.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:01:28 by labintei          #+#    #+#             */
/*   Updated: 2021/10/13 14:04:50 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void)
{
	char	buff[512];

	std::cout << "Hello World ! " << std::endl;
	std::cout << "Input a world: ";
	std::cin >> buff;
	std::cout << "You entered " << buff << std::endl;

	return 0;
}
