/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:59:28 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 22:08:43 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BUREAUCRAT_HPP
#define		BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <stdexcept>

class	Bureaucrat
{
	public :
		operateur++ // INCREMENTER REVIENT A -- JUSQU QU AU GRADE 1
		operateur-- // DECREMENTER REVIENT A ++
		overload l operatuer qui affichera (<<)
		<name>, bureaucrat grade <grade>

		std::string&	getName(void) const;
		int				getGrade(void) const;
		std::exception	GradeTooHightException(void);
		std::exception	GradeTooLowExecption(void);
	private :
		std::string		_name;
		int				_grade;
};


#endif
