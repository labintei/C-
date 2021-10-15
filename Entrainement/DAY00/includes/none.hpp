/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   none.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 19:01:19 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 20:45:34 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NONE_HPP
#define NONE_HPP

class	Sample
{
	public:
		Sample(void);
		~Sample(void);
		static int		getnb();
	private:
		static int		_nb;
};

#endif
