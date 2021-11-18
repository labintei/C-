/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 19:05:15 by labintei          #+#    #+#             */
/*   Updated: 2021/11/17 21:45:02 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

class	Data
{
	public:
		int n;
};

uintptr_t	serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int		main(int argc, char **argv)
{
	Data*	a = new Data;
	uintptr_t	b;
	a->n = 89;
	b = serialize(a);
	std::cout << "Serialize : " << b << std::endl;
	std::cout << "Deserialize : " << deserialize(b) << std::endl;
	std::cout << "Data : " << a << std::endl;
	std::cout << "Deserialize Data " << deserialize(b) << std::endl;
	delete a;
	return 0;
}
