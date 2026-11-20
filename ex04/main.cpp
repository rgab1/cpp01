/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 01:14:34 by grivault          #+#    #+#             */
/*   Updated: 2026/11/20 02:52:38 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

void	printError( std::string str )
{
	std::cerr << "Error: " << str << std::endl;
}

std::string	readFile( std::ifstream &inFile )
{
	std::stringstream	buffer;
	std::string			content;

	buffer << inFile.rdbuf();
	content = buffer.str();
	return (content);
}

std::string	replace(std::string content, std::string s1, std::string s2)
{
	std::string	result;
	size_t		pos = 0;
	size_t		found;

	while ((found = content.find(s1, pos)) != std::string::npos)
	{
		result += content.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
	}
	result += content.substr(pos);
	return (result);
}

int	main(int ac, char **av)
{
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::string		fileContent;

	if (ac != 4)
		return (printError("this program expects 3 arguments"), 1);
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	if (!s1.length())
		return (printError("s1 cannot be empty"), 1);

	std::ifstream	inFile(filename.c_str());
	if (!inFile.is_open())
		return (printError("could not open: " + filename), 1);

	fileContent = readFile(inFile);
	fileContent = replace(fileContent, s1, s2);

	std::ofstream	outFile((filename + ".replace").c_str());
	if (!outFile.is_open())
		return (printError("could not create: " + filename + ".replace"), 1);
	outFile << fileContent;
	return (0);
}
