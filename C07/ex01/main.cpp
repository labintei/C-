/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:05:15 by labintei          #+#    #+#             */
/*   Updated: 2021/11/18 13:01:56 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int		main(int argc, char **argv)
{
	char	s[250] = "Bonjour tout le monde";
	int		d[35] = {45, 98 , 101, 110};
	std::cout << "Without iter s : " << s << std::endl;
	iter(s, 15, function);
	std::cout << "With iter s : " << s << std::endl;
	std::cout << "Without iter d :";
	for(int j = 0; j < 4; j++)
		std::cout << " " << d[j];
	std::cout << std::endl;
	iter(d, 4, function);
	std::cout << "With iter d :";
	for(int j = 0; j < 4; j++)
		std::cout << " " << d[j];
	std::cout << std::endl;
	return 0;
}
