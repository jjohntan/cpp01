/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:16:03 by jetan             #+#    #+#             */
/*   Updated: 2025/03/25 15:28:08 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
	private:
		std::string name;
		Weapon* _Weapon;
	public:
		HumanB(std::string name);//constructor
		~HumanB();//destructor
		void attack();
		void setWeapon(Weapon& weapon);
};

#endif