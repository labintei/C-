/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:22:52 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 19:15:04 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): _type("(null)")
{
	std::cout << "Naissance de l Animal de type " << this->_type << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << "Naissance de l Animal de type " << this->_type << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Mort de l'animal de type " << _type << std::endl;
}

std::string		Animal::getType(void) const
{
	return this->_type;
}

void	Animal::makeSound(void) const
{
	std::cout << "Unknow animal song  ..." << std::endl;
}
