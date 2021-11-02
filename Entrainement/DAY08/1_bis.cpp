/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1_bis.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:47:23 by labintei          #+#    #+#             */
/*   Updated: 2021/10/29 15:52:43 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <list>

void	displayInt(int i)
{
	std::cout << i << std::endl;
}

int		main()
{
	std::list<int>	lst;

	lst.push_back(10);
	lst.push_back(23);
	lst.push_back(3);
	lst.push_back(46);
	lst.push_back(556);
	lst.push_back(-42);

	for_each(lst.begin(), lst.end(), displayInt);
	return 0;
}
