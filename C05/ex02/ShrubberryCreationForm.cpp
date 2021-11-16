/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:49:47 by labintei          #+#    #+#             */
/*   Updated: 2021/11/16 17:45:40 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberryCreationForm.hpp"
#include <fstream>

ShrubberryCreationForm::ShrubberryCreationForm(std::string target): Form("ShruberryCreationForm", 145, 137),_target(target)
{
}

ShrubberryCreationForm::~ShrubberryCreationForm(void)
{
}

void		ShrubberryCreationForm::execute(Bureaucrat const & executor) const
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
	std::ofstream ofs;
	std::string		name_file(_target);
	name_file += "_shrubberry";
	std::cout << "Create " << name_file << std::endl;
	ofs.open(name_file);
	ofs << "     O\n    OOO\n   OOOOO\n  OOOOOOO\n OOOOOOOOO\n     II\n     II\n" << std::endl;
	ofs.close();
}
