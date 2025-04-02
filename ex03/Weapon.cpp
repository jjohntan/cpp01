/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 14:56:52 by jetan             #+#    #+#             */
/*   Updated: 2025/04/02 15:02:17 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

//constructor
Weapon::Weapon(std::string type): type(type)
{	
}

//destructor
Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

std::string Weapon::getType() { return type; }