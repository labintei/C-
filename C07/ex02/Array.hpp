/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 13:08:47 by labintei          #+#    #+#             */
/*   Updated: 2021/11/18 15:23:34 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename t>
class	Array
{
	public:
		Array(): _s(NULL), _u(0){};
		~Array(){delete [] _s;};
		Array(unsigned int u): _s(new t[u]), _u(u){;};
		Array& operator=(Array const &a){
			if(_u != 0 && _u != a._u)
				delete [] _s;
			_u = a._u;
			_s = new t[_u];
			for(unsigned int j=0 ; j < _u; j++)
				_s[j] = a._s[j];
			return *this;
		};
		t & operator[](unsigned int u){if(u < _u){return _s[u];}throw std::exception();};
		Array* copy(Array a){return *a;};
		unsigned int	size(void){return _u;};
	private:
		t *_s;
		unsigned int _u;
};



#endif
