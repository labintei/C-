/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:53:20 by labintei          #+#    #+#             */
/*   Updated: 2021/10/30 20:47:14 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void){}
/*
Zombie * newZombie(std::string name)
{
	Zombie	*a = new Zombie(name);
	return a;
}*/

Zombie::~Zombie(void)
{
	std::cout << this->_name << "  Deaaaddd ..." << std::endl;
}
