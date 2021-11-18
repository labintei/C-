/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:59:37 by labintei          #+#    #+#             */
/*   Updated: 2021/11/18 20:35:14 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

template<typename T>
class		MutantStack : public std::stack<T>
{
	public:
		MutantStack(){};
		~MutantStack(){};
		MutantStack<T>&	operator=(const MutantStack<T>& src){this->c = src.c; return *this;};
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator		begin(){return this->c.begin();};
		iterator		end(){return this->c.end();};
//		void	push(T a);
//		void	pop(T a);
};


#endif
