/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 01:46:41 by grivault          #+#    #+#             */
/*   Updated: 2026/11/19 03:51:53 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class	HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		void	setWeapon( Weapon &weapon );
		void	attack( void ) const;

		HumanB( std::string name );
		~HumanB();
};

#endif
