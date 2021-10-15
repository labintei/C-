/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class_struct.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:11:41 by labintei          #+#    #+#             */
/*   Updated: 2021/10/14 17:15:06 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_STRUCT_HPP
#define CLASS_STRUCT_HPP

struct Sample
{
	int	foo;

	Sample();
	~Sample();

	void	bar(void) const;
};

#endif
