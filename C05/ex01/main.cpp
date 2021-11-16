/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:19:09 by labintei          #+#    #+#             */
/*   Updated: 2021/11/16 11:22:06 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int		main(void)
{

	Bureaucrat a("Youpi", 45);
	Bureaucrat b("Olala", 25);

	Form		c("Formulaire A42", 25, 25);

	a.signForm(c);
	b.signForm(c);
	b.signForm(c);

	return 0;
}
