/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 01:46:41 by grivault          #+#    #+#             */
/*   Updated: 2026/11/19 03:52:27 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class	HumanA
{
	private:
		std::string		_name;
		Weapon	&_weapon;
	public:
		void	attack( void ) const;

		HumanA( std::string name, Weapon &weapon);
		~HumanA();
};

#endif
