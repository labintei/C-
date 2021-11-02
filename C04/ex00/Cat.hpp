/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:04:26 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 18:42:04 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		CAT_HPP
#define		CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public :
		Cat(void);
		~Cat(void);
		virtual void	makeSound(void) const;
};

#endif
