/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:19:43 by jetan             #+#    #+#             */
/*   Updated: 2025/03/17 14:36:04 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): name(name), _Weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (_Weapon)
		std::cout << this->name << " attacks with their " << _Weapon->getType() << std::endl;
	else
		std::cout << this->name << " not always have a Weapon" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	_Weapon = &weapon;
}