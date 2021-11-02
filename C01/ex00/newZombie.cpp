/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:06:54 by labintei          #+#    #+#             */
/*   Updated: 2021/10/30 20:13:18 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name){}

Zombie * newZombie(std::string name)
{
	Zombie	*a = new Zombie(name);
	return a;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << "  Deaaaddd ..." << std::endl;
}
