/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparaisons.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:43:49 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 18:58:17 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPARAISONS_HPP
#define COMPARAISONS_HPP

class		Sample
{
	public:
		Sample(int v);
		~Sample();
		int		getfoo(void) const;
		int		compare( Sample * other ) const;

	private :
		int		_foo;
};

#endif
