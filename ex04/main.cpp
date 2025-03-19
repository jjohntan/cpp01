/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:05:56 by jetan             #+#    #+#             */
/*   Updated: 2025/03/19 19:55:38 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	(void)ac;
	std::ifstream infile(av[1]);
	if (!infile)
	{
		std::cerr << "Error failed to open file" << std::endl;
		return (1);
	}
	std::string newfile = std::string(av[1]) + ".replace";
	std::ofstream outfile(newfile.c_str());
	if (!outfile)
	{
		std::cerr << "Error failed to create file" << std::endl;
		return (1);
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string line;
	size_t pos;
	std::string before;
	std::string after;
	while (getline(infile, line))
	{
		pos = line.find(s1);
		if (pos != std::string::npos)
		{
			before = line.substr(0, pos);
			std::cout << before << std::endl;
			after = line.substr(pos + s1.length());
			std::cout << after << std::endl;
			line = before + s2 + after;
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
}