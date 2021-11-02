/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:04:26 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 19:30:44 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CAT_HPP
#define		CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	public :
		Cat(void);
		virtual ~Cat(void);
		virtual void	makeSound(void) const;
	private :
		Brain*	brain;
};

#endif
