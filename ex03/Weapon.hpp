/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 01:36:17 by grivault          #+#    #+#             */
/*   Updated: 2026/11/19 03:36:46 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class	Weapon
{
	private:
		std::string	_type;
		Weapon();
	public:
		const std::string	&getType( void );
		void				setType( std::string type );

		Weapon( std::string type);
		~Weapon();
};

#endif
