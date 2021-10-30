/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:43:21 by labintei          #+#    #+#             */
/*   Updated: 2021/10/12 18:27:39 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Phonebook::Search_Contact(int j)
{
	if(j == 0)
		std::cout << "my Awesome Phonebook is empty";
	else
	{
		std::cout << "|index     |first name|last name |nickname  |";
		for(int i(0); (i < j) ; i++)
		{
			std::cout << std::endl;
			contact[i].display(i);
		}
	}
	std::cout << std::endl;
}
