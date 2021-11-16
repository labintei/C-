/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:00:53 by labintei          #+#    #+#             */
/*   Updated: 2021/11/16 17:29:57 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

void		PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		essai(executor);
	}
	catch(std::exception & e)
	{
		std::cout << "Failed ... to execute" << std::endl;
		return ;
	}
	std::cout << _target << " a ete pardonne par Zafod Beeblebrox" << std::endl;
}
