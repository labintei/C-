/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:35:19 by labintei          #+#    #+#             */
/*   Updated: 2021/11/16 11:22:42 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("default"), _signed(false), _grade_signed(1), _grade_exec(1)
{
}

Form::Form(std::string name, int grade_signed, int grade_exec): _name(name), _signed(false), _grade_signed(grade_signed), _grade_exec(grade_exec)
{
}

Form::~Form()
{
}

std::string		Form::get_name(void)
{
	return _name;
}

bool	Form::get_signed(void)
{
	return _signed;
}

int		Form::get_grade_signed(void)
{
	return _grade_signed;
}

int		Form::get_grade_exec(void)
{
	return _grade_exec;
}

void	Form::beSigned(Bureaucrat a)
{
	if(this->_signed == false && this->get_grade_signed() >= a.getGrade())
	{
		this->_signed = true;
		std::cout << a.getName();
		std::cout << " signs ";
		std::cout << this->get_name();
		std::cout << std::endl;
	}
	else if(this->get_signed())
	{
		std::cout << "Already signed" << std::endl;
	}
	else
		throw GradeTooLowException();
}


/*
void	signForm(void)
{
	if((this->get_signed)
}
*/


