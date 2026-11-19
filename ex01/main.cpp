/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 01:04:33 by grivault          #+#    #+#             */
/*   Updated: 2026/11/19 01:12:23 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main( void )
{
	Zombie	*zombieArray;

	zombieArray = zombieHorde(10, "Steve");
	for (int i = 0; i < 10; i++)
		zombieArray[i].announce();
	delete []zombieArray;
	return (0);
}
