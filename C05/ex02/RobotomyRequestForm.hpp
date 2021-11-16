/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:51:38 by labintei          #+#    #+#             */
/*   Updated: 2021/11/16 15:48:58 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define	ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"


class	RobotomyRequestForm : public Form
{
	public :
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		void	execute(Bureaucrat const & executor) const;
	private :
		std::string	_target;
};

#endif
