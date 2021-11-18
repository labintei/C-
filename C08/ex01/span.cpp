/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:03:04 by labintei          #+#    #+#             */
/*   Updated: 2021/11/18 18:52:24 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n): _u(n)
{
}

Span::~Span()
{
//	delete [] _s;
}
/*
void	Span::addNumberMultiple(int a, unsigned int n)
{
	if(_u - _s.size() < n)
		return throw exceptout();
	for(int i=0; i < n; i++)
		_s.push_back(a);

}*/

void	Span::addNumber(int a)
{
	if(_s.size() >= _u)
		return throw exceptout();
	_s.push_back(a);
}

unsigned int	Span::shortestSpan(void)
{
	if(_s.size() == 0 || _s.size() == 1)
		throw exceptspan();
	unsigned int min = abs(_s[0] - _s[1]);
	for(unsigned int j = 0; j < _s.size(); j++)
	{
		for(unsigned int i = j + 1; i < _s.size(); i++)
		{
			if(min > abs(_s[j] - _s[i]))
				min = abs(_s[j] - _s[i]);
		}
	}
	return min;
}

unsigned int		Span::longestSpan(void)
{
	if(_s.size() == 0 || _s.size() == 1)
		throw exceptspan();
	unsigned int max = abs(_s[0] - _s[1]);
	for(unsigned int j = 0; j < _s.size(); j++)
	{
		for(unsigned int i = j + 1; i < _s.size(); i++)
		{
			if(max < abs(_s[j] - _s[i]))
				max = abs(_s[j] - _s[i]);
		}
	}
	return max;
}
