/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ic.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 19:09:23 by labintei          #+#    #+#             */
/*   Updated: 2021/11/17 19:20:00 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		IC_HPP
#define		IC_HPP

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <stdexcept>

class	Ic
{
	public :
	class	Ndexcept : public std::exception
	{
		public:
		virtual const char* t() const throw()
		{
			return(" Non Displayable");
		}
	};
	class	Imexcept : public std::exception
	{
		public:
		virtual const char * t() const throw()
		{
			return(" impossible");
		}
	};
	Ic(std::string st): s(st){};
	~Ic(){};
	void	convertchar(void);
	void	convertint(void);
	void	convertfloat(void);
	void	convertdouble(void);

	private:
		std::string		s;
};


#endif
