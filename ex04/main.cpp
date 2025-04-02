/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jetan <jetan@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 15:05:56 by jetan             #+#    #+#             */
/*   Updated: 2025/04/02 16:17:46 by jetan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

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
	std::string s1 = av[2];//find
	if (s1.empty())
	{
		std::cerr << "Error s1 is empty" << std::endl;
		return (1);
	}
	std::string s2 = av[3];//replace
	std::string line;
	while (getline(infile, line))//read line by line
	{
		size_t pos = line.find(s1);//find occurence
		while (pos != std::string::npos)//check if found
		{
			std::string before = line.substr(0, pos);//extracts the part before s1
			std::string after = line.substr(pos + s1.length());// extracts the part after s1
			line = before + s2 + after;//concatenate
			pos = line.find(s1, pos + s2.length());//find the next occurence
		}
		outfile << line << std::endl;//write each line to outfile
	}
	infile.close();//close the file
	outfile.close();//close the file
}