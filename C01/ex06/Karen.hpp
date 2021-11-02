/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labintei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:23:27 by labintei          #+#    #+#             */
/*   Updated: 2021/11/01 17:52:27 by labintei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		KAREN_HPP
#define		KAREN_HPP

#include <iostream>
#include <string>

class		Karen
{
	public:
		Karen(void);
		~Karen(void);
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
