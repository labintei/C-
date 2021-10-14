/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:26:02 by labintei          #+#    #+#             */
/*   Updated: 2021/10/12 18:25:16 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	PHONRBOOK_HPP
#define PHONRBOOK_HPP

#include <iostream>
#include <string>
#include <cctype>
#include "contact.hpp"

// Contact doit etre represente comme une instance de Classe

class Phonebook
{
	public:
			int	index;
			Contact contact[8];
	void	Search_Contact(int j);
};

#endif
