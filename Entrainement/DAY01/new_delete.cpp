/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_delete.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 21:19:15 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 21:29:37 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/new_delete.hpp"

Student::Student(std::string login) : _login(login)
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
	// STACK
	Student		bob = Student("lauranne");
	// HEAP
	Student*	jim = new Student("labintei");

	delete jim;

	return 0;
}
