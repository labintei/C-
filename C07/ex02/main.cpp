/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:05:15 by labintei          #+#    #+#             */
/*   Updated: 2021/11/18 15:24:35 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(int argc, char **argv)
{
	Array <int>   s(25);
	Array <int>  d(10);
	Array <char> y;

	for(int j=0; j < 25; j++)
		s[j] = j;
	for(int j =0; j < 25; j++)
		std::cout << " " << s[j];
	std::cout << std::endl;
	d = s;
	for(int j =0; j < 25; j++)
		std::cout << " " << d[j];
	std::cout << std::endl;
	try
	{
		std::cout << s[250] << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "Erreur pas de s[j]" << std::endl;
	}
	try
	{
		std::cout << s[2] << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "Erreur pas de s[j]" << std::endl;
	}
	try
	{
		std::cout << y[0] << std::endl;
	}
	catch(std::exception& e)
	{
		std::cout << "Erreur y vide" << std::endl;
	}

	std::cout << "size de " << s.size() << std::endl;
	return 0;
}
