/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_attributs0.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:33:59 by labintei          #+#    #+#             */
/*   Updated: 2021/10/13 16:44:53 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/class_attributs0.hpp"


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
	std::cout << "Lauranne" << std::endl;
	return ;
}

int		main()
{
	Sample instance;

	instance.foo = 42;
	std::cout << "instance foo " << instance.foo << std::endl;
	instance.bar();

	return 0;

}
