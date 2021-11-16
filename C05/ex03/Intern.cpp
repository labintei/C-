/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:36:02 by labintei          #+#    #+#             */
/*   Updated: 2021/11/16 18:54:29 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <string>

Intern::Intern()
{
}

Intern::~Intern()
{
}

Form*	Intern::makeForm(std::string form, std::string target)
{
	if(form == "shrubberry creation" || form == "robotomy request" || \
	form == "presidential pardon")
		std::cout << "Intern creates " << form << std::endl;
	if(form == "shrubberry creation")
		return new ShrubberryCreationForm(target);
	if(form == "robotomy request")
		return new RobotomyRequestForm(target);
	if(form == "presidential pardon")
		return new PresidentialPardonForm(target);
	std::cout << "Erreur pas de Forme a ce nom : " << form << std::endl;
	return NULL;
}
