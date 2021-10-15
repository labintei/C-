/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_delete_1.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:30:41 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 21:35:07 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/new_delete_1.hpp"

Student::Student() : _login("login")
{
	std::cout << "Construct" << std::endl;
	std::cout << this->_login << std::endl;
}

Student::~Student()
{
	std::cout << "Destruct" << std::endl;
}

int		main()
{
	Student*	studs = new Student[42];

	delete [] studs;
	return 0;
}
