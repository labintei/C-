/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   accessors.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:25:22 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 17:38:29 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ACCESSORS_HPP
#define ACCESSORS_HPP

class	Sample
{
	public :

	Sample(void);
	~Sample(void);
	int		getfoo(void) const;
	void	setfoo(int v);

	private :
		int		_foo;
};

#endif
