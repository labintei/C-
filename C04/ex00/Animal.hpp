/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:57:28 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 18:40:18 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ANIMAL_HPP
#define		ANIMAL_HPP

#include <iostream>
#include <string>

class		Animal
{
	public:
		Animal(std::string s);
		Animal(void);
		~Animal(void);
		virtual	void	makeSound() const;
		std::string		getType(void) const;
	protected:
		std::string		_type;
};

#endif
