/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:20:04 by jetan             #+#    #+#             */
/*   Updated: 2025/03/25 15:28:27 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
	private:
		Weapon& _Weapon;
		std::string name;
	public:
		HumanA(std::string name, Weapon& weapon);//constructor
		~HumanA();//destructor
		void attack();
};

#endif