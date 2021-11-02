/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:17:03 by labintei          #+#    #+#             */
/*   Updated: 2021/10/30 20:50:15 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"/*
#include <iostream>
#include <string>*/

void	Zombie::set_name(std::string name)
{
	Zombie::_name = name;
}

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*		horde = new Zombie[N];

	for(int i = 0; i < N; i++)
	{
		std::string		str;
		str = name;
		str += " ";
		str += std::to_string(i);
		horde[i].set_name(str);
	}
	return horde;
}
