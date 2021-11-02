/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:29:42 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 16:47:24 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug(void)
{
	std::cout << "I love get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

Karen::Karen(void)
{
	_p["INFO"] = &Karen::info;
	_p["DEBUG"] = &Karen::debug;
	_p["WARNING"] = &Karen::warning;
	_p["ERROR"] = &Karen::error;
}

Karen::~Karen(void)
{
}

void	Karen::complain(std::string level)
{
	if(level != "INFO" && level != "DEBUG" && level != "WARNING" && level != "ERROR")
		return ;
	(this->*_p[level])();
	return ;
}
