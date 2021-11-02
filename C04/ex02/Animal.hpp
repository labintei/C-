/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 17:57:28 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 19:44:47 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		ANIMAL_HPP
#define		ANIMAL_HPP

#include <iostream>
#include <string>

class		Animal
{
	public:
		virtual ~Animal(void);
		virtual	void	makeSound() const;
		std::string		getType(void) const;
	protected:
		std::string		_type;
		Animal(void);
		Animal(std::string s);

};

#endif
