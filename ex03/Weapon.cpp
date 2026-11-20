/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 01:39:45 by grivault          #+#    #+#             */
/*   Updated: 2026/11/19 03:36:35 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type )
{
	this->_type = type;
}

Weapon::~Weapon()
{}

const std::string	&Weapon::getType( void )
{
	const std::string &ret = this->_type;

	return (ret);
}

void				Weapon::setType( std::string type )
{
	this->_type = type;
}
