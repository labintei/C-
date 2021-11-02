/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 13:19:41 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 15:20:37 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

// PROGRAMME CALL replace
//
// PREND UN FILENAME ET DEUX STRING S1 et S2 (QUI NE SONT PAS VIDE)
//
// VA OUVRIR FILENAME ET REMPLACER TOUTES LES OCCURENCES DE S1 avec S2
//
// TOUTE LES FONCTIONS DE STD::string sont permises except replace

// SHOW SOME TEST FILE pour montrere que ca marche

void	replace_string(std::string* s,std::string s1, std::string s2)
{
	std::string		replace;

	for(int a = 0; (*s)[a]; a++)
	{
		for(unsigned long b = 0; b < s1.length(); b++)
		{
			if((*s)[a + b] && (*s)[a +b] == s1[b] && b == s1.length() - 1)
			{
				replace += s2;
				a += b;
			}
			else if((*s)[a + b] == s1[b])
				;
			else
			{
				replace += (*s)[a + b];
				break ;
			}
		}
	}
	(*s) = replace;
}

int		error(const std::string		s)
{
	std::cout << s << std::endl;
	return 1;
}

int		main(int argc, char **argv)
{
	if (argc != 4)
		return error("Error wrong number if arguments");
	else
	{
		std::ifstream	ifs(argv[1]);
		std::string		s;
		std::string		s1 = argv[2];
		std::string		s2 = argv[3];
		std::string		file;
		std::string		temp;

		if(s1.length() < 1 || s2.length() < 1)
			return error("Empty strings s1 or s2 as arguemnts");
		if(!ifs.is_open())
			return error("Failed to open file");
		s = argv[1];
		s += ".replace";
		while(getline(ifs, temp))
		{
			file += temp;
			if(!ifs.eof())
				file += "\n";
		}
		ifs.close();
		std::cout << file << std::endl;
		replace_string(&file, s1, s2);
		std::cout << file << std::endl;
		std::ofstream	ofs(s);
		ofs << file;
		// LE FICHIER DOIT IL DEJA ETRE EXISTANT ?? pas sur
		ofs.close();
		return 0;
	}
}
