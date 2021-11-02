/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 12:58:17 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 15:13:18 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(std::string const & name): ClapTrap(name), _guard(false)
{
	_hitpoint = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "Created ScavTrap " << name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor called for ScavTrap " << this->_name << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if(this->_guard == false)
	{
		this->_guard = true;
		std::cout << "ScavTrap " << this->_name << " is in guardGate mode" << std::endl;
	}
	else
	{
		this->_guard = false;
		std::cout << "ScavTrap " << this->_name << " is no more guardGate mode" << std::endl;
	}
}
