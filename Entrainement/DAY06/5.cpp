/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 17:26:56 by labintei          #+#    #+#             */
/*   Updated: 2021/10/28 19:18:27 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <string>
#include <exception>

// DYNAMIC CAST
// meilleur des CAST
// seul cast ayant lieu a l execution tous les autres se font a la compilation
// le dynamic cast peut echouer durant l execution
// traiter l erreur 
//
// Ne va fonctionner que dans une instance de polymorphisme
// Un fonction devra avoir une methode

class	Parent	{public : virtual ~Parent(void) {}};
class	Child1 : public Parent{};
class	Child2 : public Parent{};

int		main(void)
{
	Child1		a;
	Parent	*	b	= &a;
	Child1	*	c = dynamic_cast<Child1 *>(b);

	if(c == NULL)
	{
		std::cout << "Conversion is NOT OK" << std::endl;
	}
	else
	{
		std::cout << "Conversion is OK" << std::endl;
	}

	try
	{
		Child2 &	d = dynamic_cast<Child2 &>(*b);
		std::cout << "Conversion is OK" << std::endl;
	}
	catch( std::bad_cast &bc)
	{
		std::cout << "Conversion is not OK" << std::endl;
		return 0;
	}
	return 0;
}
