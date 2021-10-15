/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   references1.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 22:18:38 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 22:24:45 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	bptr(std::string* str)
{
	*str += "   Lauranne";
}

void	bconstptr(std::string	const * str)
{
	std::cout << *str << std::endl;
}

void	bRef(std::string& str)
{
	str += "   Lauranne";
}

int		main()
{
	std::string		l("Bintein ");

	std::cout << l << std::endl;
	bptr(&l);
	bconstptr(&l);
	bRef(l);
	bconstptr(&l);
	return 0;
}
