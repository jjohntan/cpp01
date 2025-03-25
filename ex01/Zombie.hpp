/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:06:56 by jetan             #+#    #+#             */
/*   Updated: 2025/03/25 15:02:25 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie();//default constructor
	Zombie(std::string name);//constructor
	~Zombie();//destructor
	void announce( void );
	void setname( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif