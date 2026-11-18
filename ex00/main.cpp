/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 00:47:31 by grivault          #+#    #+#             */
/*   Updated: 2026/11/19 00:51:52 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	*steve;
	steve = newZombie("Steve");
	steve->announce();
	delete steve;
	randomChump("Harry");
	return (0);
}
