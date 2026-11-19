/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 01:00:40 by grivault          #+#    #+#             */
/*   Updated: 2026/11/19 01:12:47 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie	*zombieArray;

	zombieArray = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieArray[i].setName( name );
	return (zombieArray);
}
