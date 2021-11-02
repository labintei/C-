/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:11:04 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 19:48:05 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int		main()
{
	Dog			a;
	Cat			c;
	const		Animal* j = new Dog();
	// Animal		a;

	a.makeSound();
	c.makeSound();
	j->makeSound();

	delete j;
}
