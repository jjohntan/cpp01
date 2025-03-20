/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:05:56 by jetan             #+#    #+#             */
/*   Updated: 2025/03/20 15:13:43 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << " program takes three parameters" << std::endl;
		return (1);
	}
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
	if (s1.empty())
	{
		std::cout << "Error s1 is empty" << std::endl;
		return (1);
	}
	std::string s2 = av[3];
	std::string line;
	size_t pos;
	std::string before;
	std::string after;
	while (getline(infile, line))
	{
		pos = line.find(s1);
		while (pos != std::string::npos)
		{
			before = line.substr(0, pos);
			after = line.substr(pos + s1.length());
			line = before + s2 + after;
			pos = line.find(s1, pos + s2.length());//search for the next occurence
		}
		outfile << line << std::endl;
	}
	infile.close();
	outfile.close();
}