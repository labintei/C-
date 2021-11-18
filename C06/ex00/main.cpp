/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:05:15 by labintei          #+#    #+#             */
/*   Updated: 2021/11/17 19:22:24 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ic.hpp"

int		main(int argc, char **argv)
{
	if(argc == 1)
	{
		std::cout << "Wrong  arguments" << std::endl;
		return 1;
	}
	Ic a(argv[1]);
	std::cout << "char:";
	a.convertchar();
	std::cout << "int:" ;
	a.convertint();
	std::cout << "float:";
	a.convertfloat();
	std::cout << "double:";
	a.convertdouble();
	return 0;
}
