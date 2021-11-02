/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:37:58 by labintei          #+#    #+#             */
/*   Updated: 2021/10/29 15:46:55 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <map>
#include <vector>
#include <list>

class	IOp;

int		main()
{
	std::list<int>					lst1;
	std::map<std::string, IOp*>		map1;
	std::vector<int>				v1;
	std::vector<int>				v2(42, 100);
	
	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);

//	map1["opA"] = new OpA;
//	map1["opB"] = new OpB;

	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = lst1.end();

	for(it = lst1.begin(); it != ite; ++it)
	{
		std::cout << *it << std::endl;
	}
	return 0;
}
