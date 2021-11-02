/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:25:09 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 17:23:32 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	_hitpoint = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "Created FragTrap " << name << std::endl;
}

FragTrap::FragTrap(void)
{
	_name = "(null)";
	_hitpoint = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "Created FragTrap " << "(null)" << std::endl;
}



FragTrap::~FragTrap(void)
{
	std::cout << "Destructor called for FragTrap " << this->_name << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "Fragtrap " << this->_name << " : ca te dit pas un petit high Five !?" << std::endl;
}

