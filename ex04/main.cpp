/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:05:56 by jetan             #+#    #+#             */
/*   Updated: 2025/03/19 15:51:20 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	(void)ac;
	std::ifstream infile(av[1]);
	std::string newfile = std::string(av[1]) + ".replace";
	std::ofstream outfile(newfile.c_str());
	std::string line;
	
	while (getline(infile, line))
	{
		outfile << line << std::endl;
	}
}