/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   this.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:46:41 by labintei          #+#    #+#             */
/*   Updated: 2021/10/13 16:52:00 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/this.hpp"


Sample::Sample()
{
	std::cout << "Construct" << std::endl;
	return ;
}

Sample::~Sample()
{
	std::cout << "Destructor" << std::endl;
	return ;
}

void	Sample::bar()
{
	std::cout << "foo = " << this->foo << std::endl;
	this->foo = -42;
	return ;
}

int		main()
{
	Sample instance;

	instance.foo = 42;
	instance.bar();
	std::cout << "instance foo " << instance.foo << std::endl;
	return 0;
}
