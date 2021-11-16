/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:59:28 by labintei          #+#    #+#             */
/*   Updated: 2021/11/16 18:11:25 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BUREAUCRAT_HPP
#define		BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include "Form.hpp"

class	Form;

class	Bureaucrat
{
	public :
		Bureaucrat(std::string name, int grade);
		Bureaucrat(void);
		~Bureaucrat(void){};
		class GradeTooLowException : public std::exception
		{
			public:
			virtual const char* low() const throw()
			{
				return("Too Low");
			}
		};
		class GradeTooHighException : public std::exception
		{
			public:
			virtual const char* high() const throw()
			{
				return("Too High");
			}
		};
		std::string const &		getName(void) const;
		int						getGrade(void) const;
		Bureaucrat & operator++(void);
		Bureaucrat & operator--(void);
		void	signForm(Form &form);
		void	executeForm(Form const &form);
	private :
		std::string		_name;
		int				_grade;
};

std::ostream & operator<<(std::ostream &a, Bureaucrat const & f);

#endif
