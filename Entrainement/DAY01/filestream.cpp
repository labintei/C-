/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filestream.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 22:44:37 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 22:50:03 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int		main()
{
	std::ifstream	ifs("numbers");
	unsigned int	dst(45);
	unsigned int	dst1(24);
	ifs >> dst >> dst1;

	std::cout << dst << "   " << dst1 << std::endl;
	ifs.close();

	std::ofstream	ofs("test.txt");
	ofs << "Bonjour toi" << std::endl;
	ofs.close();
}
