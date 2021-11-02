/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:45:09 by labintei          #+#    #+#             */
/*   Updated: 2021/11/02 19:35:21 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		BRAIN_HPP
#define		BRAIN_HPP

#include <string>
#include <iostream>

class		Brain
{
	public:
		Brain(void);
		virtual	~Brain(void);
		void	set_ideas(std::string *id);
		std::string		ideas[100];
};

#endif
