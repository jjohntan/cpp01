/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 17:16:03 by jetan             #+#    #+#             */
/*   Updated: 2025/03/26 14:29:30 by jetan            ###   ########.fr       */
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
		Weapon* _Weapon;//pointer to a weapon object
	public:
		HumanB(std::string name);//constructor
		~HumanB();//destructor
		void attack();
		void setWeapon(Weapon& weapon);
};

#endif