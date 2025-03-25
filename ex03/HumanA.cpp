/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:33:50 by jetan             #+#    #+#             */
/*   Updated: 2025/03/25 15:26:06 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon): _Weapon(weapon), name(name)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << _Weapon.getType() << std::endl;
}