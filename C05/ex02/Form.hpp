/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 09:24:12 by labintei          #+#    #+#             */
/*   Updated: 2021/11/16 15:37:06 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FORM_HPP
#define		FORM_HPP

#include "Bureaucrat.hpp"


class	Bureaucrat;

class	Form
{
	public :
	class GradeTooLowException : public std::exception
	{
		public:
		virtual void low_form() const throw()
		{
			std::cout << "Too Low" << std::endl;
		}
	};
	class NotSignException : public std::exception
	{
		public:
		virtual void not_sign() const throw()
		{
			std::cout << "not_sign" << std::endl;
		}
	};
	class GradeTooHighException : public std::exception
	{
		public:
		virtual void high_form() const throw()
		{
			std::cout << "Too High" << std::endl;
		}
	};
	Form();
	Form(std::string name, int get_signed, int get_exec);
	virtual		~Form();
	std::string	get_name(void);
	bool	get_signed(void);
	int		get_grade_signed(void);
	int		get_grade_exec(void);
	void	beSigned(Bureaucrat a);
	void	essai(Bureaucrat const & executor) const;
	virtual void	execute(Bureaucrat const & executor) const = 0;
	private:
		std::string		_name;
		bool	_signed;
		int		_grade_signed;
		int		_grade_exec;
};

std::ostream & operator<<(std::ostream &a, Form const &f);

#endif
