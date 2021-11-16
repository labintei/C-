/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:56:44 by labintei          #+#    #+#             */
/*   Updated: 2021/11/16 17:49:01 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45),_target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try
	{
		essai(executor);
	}
	catch(std::exception & e)
	{
		std::cout << "Failed ... to execute" << std::endl;
		return ;
	}
	srand (time(NULL));
	int		i = rand() % 2;
	if(i == 1)
		std::cout << _target << " BBRRRRRR BRRRRRRR BRRRRRRR " << _target << " a bien ete robotomizee dans" << std::endl;
	else
		std::cout << _target << " n a pas ete robotomizee ..." << std::endl;
}
