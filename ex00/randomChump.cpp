/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 20:50:09 by jetan             #+#    #+#             */
/*   Updated: 2025/03/26 16:54:12 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 *@brief It creates a zombie, name it, and the zombie announces itself
 */
void randomChump( std::string name )
{
	Zombie zombie(name);
	zombie.announce();
}
