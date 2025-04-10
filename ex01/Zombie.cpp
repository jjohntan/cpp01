/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 16:59:05 by jetan             #+#    #+#             */
/*   Updated: 2025/03/25 15:55:14 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

//default constructor
Zombie::Zombie(): name("")
{
}

//constructor
Zombie::Zombie(std::string name): name(name)
{
}

//destructor
Zombie::~Zombie()
{
	std::cout << name << ": destroyed " << std::endl;
}

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setname( std::string name)
{
	this->name = name;
}
