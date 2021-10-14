/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 19:32:06 by labintei          #+#    #+#             */
/*   Updated: 2021/10/12 18:22:10 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int		main()
{
	int		i(0);
	int		j(0);
	std::string	line;
	Phonebook	phonebook;
	phonebook.index = 0;
	std::cout << "Bonjour Bienvenue dans my Awesome Phonebook :" << std::endl;
	std::cout << "> ";
	getline(std::cin, line);
	while((line != "EXIT"))
	{
		if(line == "ADD")
		{
			if(phonebook.index >= 8)
			{
				std::cout << "Des que vous ajouterez un contact";
				std::cout << " votre contact le plus ancien sera supprime";
				std::cout << std::endl;
				phonebook.index = 0;
			}
			phonebook.contact[phonebook.index].set_contact();
			phonebook.index++;
			if(j < 8)
				j++;
		}
		if(line == "SEARCH")
		{
			phonebook.Search_Contact(j);
		}
		std::cout << "> ";
		getline(std::cin, line);
	}
}
