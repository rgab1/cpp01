/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/18 16:26:09 by grivault          #+#    #+#             */
/*   Updated: 2026/11/19 00:53:53 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>


class Zombie
{
	private:
		std::string	_name;

	public:
		void		setName( std::string name );
		std::string	getName( void );
		void		announce ( void );

		Zombie( void );
		~Zombie( void );
};

Zombie *newZombie( std::string name );
void	randomChump( std::string name );

#endif
