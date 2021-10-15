/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   none.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 20:44:38 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 21:02:27 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/none.hpp"

// Les classes s elimine a chaque sortie de fonction 
// Destruct ...
Sample::Sample()
{
	std::cout << "Construct" << std::endl;
	Sample::_nb += 1;
	return ;
}

Sample::~Sample()
{
	std::cout << "Destruct" << std::endl;
	Sample::_nb -= 1;
	return ;
}

int		Sample::getnb()
{
	return Sample::_nb;
}

void	f0()
{
	Sample a;

	std::cout << "Nous avons " << Sample::getnb() << std::endl;
}

void	f1()
{
	Sample i;

	std::cout << "Nous avons " << Sample::getnb() << std::endl;
	f0();
}

int		Sample::_nb = 0;;

int		main()
{
	std::cout << "Nous avons " << Sample::getnb() << std::endl;
	f1();
	std::cout << "Nous avons " << Sample::getnb() << std::endl;

	return 0;
}
