/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ic.cpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:13:18 by labintei          #+#    #+#             */
/*   Updated: 2021/11/17 21:05:56 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ic.hpp"

bool	is_only_digit(std::string s)
{
	for (int i = 0; s[i] ; i++)
	{
		if(!isdigit(s[i]) || (s[i] != '.' && s[i] != 'f' && s[i] != '-'))
			return false;
	}
	return true;
}

void	Ic::convertchar(void)
{
	try
	{
		if(is_only_digit(s))
		{
			if(s.length() > 3)
			{
				throw Imexcept();
			}
			int	i = static_cast<int>(std::strtod(s.c_str(), NULL));
			if(i < 0 || i > 127)
			{
				throw Imexcept();
			}
			if(i < ' ' || i > '~')
			{
				throw Ndexcept();
			}
		}
		else if(s.length() > 1)
		{
			throw Imexcept();
		}
		char c = static_cast<char>(s[0]);
		if(c < ' ' || c > '~')
		{
			throw Ndexcept();
		}
		std::cout << c << std::endl;
	}
	catch (std::invalid_argument& e)
	{
		throw Imexcept();
	}
	catch (std::out_of_range& e)
	{
		throw Imexcept();
	}
	catch	(Imexcept& e)
	{
		std::cout << e.t() << std::endl;
	}
	catch	(Ndexcept& e)
	{
		std::cout << e.t() << std::endl;
	}
}

void	Ic::convertint(void)
{
	try
	{
		double	i;
		i = static_cast<double>(std::strtod(s.c_str(), NULL));
		if(i < -2147483648 || i > 2147483647)
		{
			throw Imexcept();
		}
		std::cout << i << std::endl;
	}
	catch (std::invalid_argument& e)
	{
		throw Imexcept();
	}
	catch (std::out_of_range& e)
	{
		throw Imexcept();
	}
	catch	(Imexcept& e)
	{
		std::cout << e.t() << std::endl;
	}
}

void	Ic::convertfloat(void)
{
	try
	{
		float	f;
		f = static_cast<float>(std::strtod(s.c_str(),NULL));
		std::cout << f << std::endl;
	}
	catch (std::invalid_argument& e)
	{
		throw Imexcept();
	}
	catch (std::out_of_range& e)
	{
		throw Imexcept();
	}
	catch	(Imexcept& e)
	{
		std::cout << e.t() << std::endl;
	}

}

void	Ic::convertdouble(void)
{
	try
	{
		double	i;
		i = static_cast<double>(std::strtod(s.c_str(), NULL));
		std::cout << i << std::endl;
	}
	catch (std::invalid_argument& e)
	{
		throw Imexcept();
	}
	catch (std::out_of_range& e)
	{
		throw Imexcept();
	}
	catch	(Imexcept& e)
	{
		std::cout << e.t() << std::endl;
	}
}


