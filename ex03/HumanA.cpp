/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:33:50 by jetan             #+#    #+#             */
/*   Updated: 2025/04/02 15:01:45 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

//constructor
HumanA::HumanA(std::string name, Weapon& weapon): _Weapon(weapon), name(name)
{
}

//destructor
HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << _Weapon.getType() << std::endl;
}