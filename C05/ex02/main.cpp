/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:19:09 by labintei          #+#    #+#             */
/*   Updated: 2021/11/16 18:18:00 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberryCreationForm.hpp"

int		main(void)
{

	Bureaucrat a("Youpi", 45);
	Bureaucrat b("Olala", 25);
	Bureaucrat d("President", 1);
	Bureaucrat g("Loser", 150);
	PresidentialPardonForm		c("Formulaire A42");
	ShrubberryCreationForm		e("Mon beau Sapin");
	RobotomyRequestForm			f("Frankeinstein");
	a.signForm(c);
	b.signForm(c);
	b.signForm(c);
	d.signForm(e);
	d.signForm(f);

	c.execute(d);
	e.execute(d);
	f.execute(d);

	std::cout << std::endl;

	d.executeForm(c);
	d.executeForm(e);
	d.executeForm(f);

	std::cout << std::endl;

	c.execute(g);
	e.execute(g);
	f.execute(g);

	return 0;
}
