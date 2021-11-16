/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberryCreationForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:53:20 by labintei          #+#    #+#             */
/*   Updated: 2021/11/16 15:59:48 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SHRUBBERRYCREATIONFORM_HPP
#define		SHRUBBERRYCREATIONFORM_HPP

#include "Bureaucrat.hpp"

class	ShrubberryCreationForm : public Form
{
	public :
		ShrubberryCreationForm(std::string target);
		~ShrubberryCreationForm();
		void	execute(Bureaucrat const & executor) const;
	private :
		std::string		_target;
};

#endif
