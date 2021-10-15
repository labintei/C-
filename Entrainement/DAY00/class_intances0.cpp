/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_intances0.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 14:07:37 by labintei          #+#    #+#             */
/*   Updated: 2021/10/13 14:30:11 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./includes/class_instances0.hpp"

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

int		main()
{
	Sample instance;

	return 0;
}
