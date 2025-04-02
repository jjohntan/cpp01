/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:19:43 by jetan             #+#    #+#             */
/*   Updated: 2025/04/02 15:02:01 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

//constructor
HumanB::HumanB(std::string name): name(name), _Weapon(NULL)
{
}

//destructor
HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (_Weapon)
		std::cout << name << " attacks with their " << _Weapon->getType() << std::endl;
	else
		std::cout << name << " not always have a Weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	_Weapon = &weapon;
}