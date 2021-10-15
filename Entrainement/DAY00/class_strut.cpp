/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_strut.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:10:18 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 17:20:56 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/class_struct.hpp"

// diff entre struct et Class (Struct n utilise pas de Visibilite)
//

Sample::Sample(): foo(42)
{

}

Sample::~Sample()
{

}

void	Sample::bar() const
{
	std::cout << this->foo << std::endl;
}

int		main()
{
	Sample		Lau;

	Lau.bar();
}
