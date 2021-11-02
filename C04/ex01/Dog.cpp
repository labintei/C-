/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:13:19 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 19:27:07 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog(void): Animal::Animal("Dog"), brain()
{
	brain = new Brain();
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << "Destruct Dog" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << this->_type << " : WOOOUUFFUF WOOOUUUUFFFF" << std::endl;
}

