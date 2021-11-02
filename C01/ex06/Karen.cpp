/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:29:42 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 18:15:35 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <stdio.h>
#include <string>
#include <iostream>
#include <map>
/*
enum	Choise
{
	INFO = "INFO";
	DEBUG = "DEBUG";
	WARNING = "WARNING";
	ERROR = "ERROR";
};*/

enum	Svalue{ DEBUG,INFO ,WARNING, ERROR, D};

Svalue	code(std::string const& str)
{
	if(str == "DEBUG")
		return DEBUG;
	if(str == "INFO")
		return INFO;
	if(str == "WARNING")
		return WARNING;
	if(str == "ERROR")
		return ERROR;
	else
		return D;
}

void	Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don't put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
}

void	Karen::complain(std::string level)
{
	switch(code(level))
	{
		case DEBUG :
			Karen::info();
			std::cout << std::endl << std::endl;
			Karen::error();
			return ;
		case INFO :
			Karen::debug();
			std::cout << std::endl << std::endl;
			Karen::error();
			return ;
		case WARNING :
			Karen::warning();
			std::cout << std::endl << std::endl;
			Karen::error();
			return ;
		case ERROR :
			Karen::error();
			return ;
		case D :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			return ;
	}
	return ;
}
