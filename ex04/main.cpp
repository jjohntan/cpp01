/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:05:56 by jetan             #+#    #+#             */
/*   Updated: 2025/03/17 17:34:58 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main()
{
	std::ifstream infile("infile.txt");
	std::ofstream outfile("outfile.txt");
	std::string str;
	
	while (getline(infile, str))
	{
		outfile << str << std::endl;
	}
}