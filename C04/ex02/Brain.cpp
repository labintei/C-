/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:00:58 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 19:35:28 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	for(int j = 0; j < 100 ; j++)
		this->ideas[j] = "...";
	std::cout << "Brain created " << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destruct " << std::endl;
}

void	Brain::set_ideas(std::string *id)
{
	for(int i = 0; i < 100; i++)
		ideas[i] = (id)[i];
}
