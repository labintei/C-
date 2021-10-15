/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:56:02 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 17:02:35 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VISIBILITY_HPP
#define VISIBILITY_HPP

class	Sample
{
	public :
	int		pub;

	Sample();
	~Sample();

	void	pubbar() const;

	private :

	int		_priv;

	void	_privbar() const;

};

#endif
