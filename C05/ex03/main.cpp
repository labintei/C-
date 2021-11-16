/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:19:09 by labintei          #+#    #+#             */
/*   Updated: 2021/11/16 19:00:15 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberryCreationForm.hpp"
#include "Intern.hpp"

int		main(void)
{

	Intern	I;
	Bureaucrat	F("Emmanuel", 1);
	Form*	a;
	Form*	b;
	Form*	c;
	Form*	d;

	a = I.makeForm("robotomy request", "Bender");
	b = I.makeForm("presidential pardon", "Macron");
	c = I.makeForm("shrubberry creation", "Sapin");
	d = I.makeForm("fefjiorjioergji", "Opps");

	F.signForm(*a);
	F.signForm(*b);
	F.signForm(*c);

	F.executeForm(*a);
	F.executeForm(*b);
	F.executeForm(*c);
	return 0;
}
