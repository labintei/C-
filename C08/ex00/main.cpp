/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:05:15 by labintei          #+#    #+#             */
/*   Updated: 2021/11/18 16:21:02 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template< typename t>
void	test(void)
{
	t a;
	typename t::iterator	i;
	typename t::iterator	j;
	a.push_back(12);
	a.push_back(2);
	a.push_back(45);
	i = easyfind(a, 12);
	if(i == a.end())
		std::cout << "Not Find" << std::endl;
	else
		std::cout << "Find" << std::endl;
	j = easyfind(a, 444584454);
	if(j == a.end())
		std::cout << "Not Find" << std::endl;
	else
		std::cout << "Find" << std::endl;
}

int		main(int argc, char **argv)
{
	test <std::vector<int>>();
	test <std::vector<double>>();
	test <std::vector<float>>();

	return 0;
}
