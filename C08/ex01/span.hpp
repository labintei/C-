/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:54:09 by labintei          #+#    #+#             */
/*   Updated: 2021/11/18 18:45:53 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		SPAN_HPP
#define		SPAN_HPP

#include <iostream>
#include <stdexcept>
#include <vector>
#include <algorithm>

class		Span
{
	public:
		class	exceptout : std::exception
		{
			public:
			virtual void w() const throw()
			{
				std::cout << "Already too much numbers" << std::endl;
			}
		};
		class	exceptspan : std::exception
		{
			public:
			virtual void w() const throw()
			{
				std::cout << "Empty or only one element" << std::endl;
			}
		};
		Span(unsigned int n);
		~Span();
		void addNumber(int a);
		unsigned int shortestSpan(void);
		unsigned int longestSpan(void);
		void addNumberMultiple(int a, unsigned int n);
	private:
		std::vector<int>	_s;
		unsigned int		_u;
};

#endif
