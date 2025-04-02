/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:08:19 by jetan             #+#    #+#             */
/*   Updated: 2025/03/25 15:53:31 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief It creates a zombie, name it, and return it so you can use it
 * outside of the function scope.
 */
Zombie* newZombie( std::string name )
{
	//create a zombie
	Zombie *zombie = new Zombie(name);//dynamically a new zombie
	return zombie;
}