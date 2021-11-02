/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0_bis.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:08:21 by labintei          #+#    #+#             */
/*   Updated: 2021/10/29 13:17:55 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// DEFINITION D UNE LISTE CHAINEES VIA UN TENPLATE

template< typename T >
class	List
{
	public:
		List<T>(T const & content) {
		}
		List<T>(List<T> const & list){
		}
		~List<T>(void){
		}
	private:
		T *			_content;
		List<T>	*	_next;
};

int		main(void)
{
	List<int>		a(42);
	List<float>		b(3.14f);
	List< List<int> > c(a);

	return		0;
}
