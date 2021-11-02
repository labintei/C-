/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:06:17 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 18:42:15 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void): Animal::Animal("Cat")
{
}

Cat::~Cat(void)
{
}

void	Cat::makeSound(void) const
{
	std::cout << this->_type << " : MIIIAAAAOOOOUUUUUUU" << std::endl;
}
