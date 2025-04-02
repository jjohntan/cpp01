/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 13:45:05 by jetan             #+#    #+#             */
/*   Updated: 2025/03/27 17:00:23 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string String = "HI THIS IS BRAIN";
	std::string *stringPTR = &String;//A pointer to the string
	std::string &stringREF = String;//A reference to the string
	//print memory address
	std::cout << &String << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	//print value
	std::cout << String << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}