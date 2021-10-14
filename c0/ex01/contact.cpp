/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:30:46 by labintei          #+#    #+#             */
/*   Updated: 2021/10/13 10:30:38 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
//#include "contact.hpp"

void	Contact::set_contact()
{
	std::cout << "> First name : ";
	getline(std::cin , this->first_name);
	std::cout << "> Last name : ";
	getline(std::cin, this->last_name);
	std::cout << "> Nickname : ";
	getline(std::cin, this->nickname);
	std::cout << "> Phone Number : ";
	getline(std::cin, this->phone_number);
	std::cout << "> Darkest Secret : ";
	getline(std::cin, this->darkest_secret);
}

void	afficher_string(std::string c)
{
	std::string	s;

	if(c.length() > 10)
	{
		s = c.substr(0, 9);
		s.append(".");
	}
	else
	{
		s = c;
		for(size_t j(c.length()); j < 10; j++)
		{
			s.append(" ");
		}
	}
	std::cout << s;
}

void	Contact::display(int i)
{
	char	c;

	c = i + '0';
	std::cout << '|';
	std::cout << c;
	std::cout << "         ";
	std::cout << '|';
	afficher_string(this->first_name);
	std::cout << '|';
	afficher_string(this->last_name);
	std::cout << '|';
	afficher_string(this->nickname);
	std::cout << '|';
}
