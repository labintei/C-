/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:42:47 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 16:44:51 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONST_HPP
#define CONST_HPP

class	Sample{

	public:

	float const pi;
	int			a;

	Sample(float const f);
	~Sample();

	void	bar() const;

};

#endif
