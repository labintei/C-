/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:53:19 by labintei          #+#    #+#             */
/*   Updated: 2021/11/16 09:51:10 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if(_grade > 150)
		throw GradeTooLowException();
	if(_grade < 1)
		throw GradeTooHighException();
	else
	{
		std::cout << *this << std::endl;
	}
}

Bureaucrat::Bureaucrat(void): _name("default"), _grade(150)
{
	std::cout << this;
}

std::string const &		Bureaucrat::getName(void) const
{
	return _name;
}

int			Bureaucrat::getGrade(void) const
{
	return _grade;
}

Bureaucrat &	Bureaucrat::operator--(void)
{
	if(_grade <= 1)
	{
		throw GradeTooHighException();
	}
	if((_grade - 1) > 150)
	{
		throw GradeTooLowException();
	}
	else
	{
		_grade--;
		std::cout << *this << std::endl;
	}
	return *this;
}

Bureaucrat &	Bureaucrat::operator++(void)
{
	if(_grade >= 150)
	{
		throw GradeTooLowException();
	}
	if((_grade + 1) < 1)
	{
		throw GradeTooHighException();
	}
	else
	{
		_grade++;
		std::cout << *this << std::endl;
	}
	return *this;
}

std::ostream& operator<<(std::ostream &a, Bureaucrat const &f)
{
	a << f.getName();
	a << ", bureaucrat grade ";
	a << f.getGrade();
	return a;
}
