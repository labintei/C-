/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:19:09 by labintei          #+#    #+#             */
/*   Updated: 2021/11/15 23:58:58 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int		main(void)
{
	try
	{
		Bureaucrat("Lauranne", 45);
	}
	catch (Bureaucrat::GradeTooHighException & a)
	{
		std::cout << a.high() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & a)
	{
		std::cout << a.low() << std::endl;
	}

	try
	{
		Bureaucrat("Bintein", 245);
	}
	catch (Bureaucrat::GradeTooHighException & a)
	{
		std::cout << a.high() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & a)
	{
		std::cout << a.low() << std::endl;
	}

	Bureaucrat a("Youpi", 45);
	Bureaucrat b("Olala", 25);

	try
	{
		++a;
	}
	catch (Bureaucrat::GradeTooHighException & a)
	{
		std::cout << a.high() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & a)
	{
		std::cout << a.low() << std::endl;
	}
	
	try
	{
		--b;
	}
	catch (Bureaucrat::GradeTooHighException & a)
	{
		std::cout << a.high() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & a)
	{
		std::cout << a.low() << std::endl;
	}
	


}
