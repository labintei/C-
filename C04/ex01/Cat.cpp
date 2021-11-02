/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:06:17 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 19:26:42 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal::Animal("Cat")
{
	brain = new Brain();
}

Cat::~Cat(void)
{
	delete	brain;
	std::cout << "Destruct Cat " << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << this->_type << " : MIIIAAAAOOOOUUUUUUU" << std::endl;
}
