/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 16:32:22 by grivault          #+#    #+#             */
/*   Updated: 2026/11/18 17:15:46 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}
~Zombie::Zombie()
{
	std::cout << this->_name << " has been destroyed." << std::endl;
}
void	Zombie::setName( std::string name )
{
	this->_name = name;
}

std::string	Zombie::getName( void )
{
	return (this->_name);
}

void	Zombie::announce( void )
{
	std::cout << this->_name << ": "
			  << "BraiiiiiiinnnzzzZ..."
			  << std::endl;
}
