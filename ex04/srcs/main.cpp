/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:51:42 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/11 15:19:34 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replaceMatch(const std::string& content, const std::string& s1, const std::string& s2)
{
	if (content.empty() || s1.empty() || s2.empty())
	{
		std::cerr << "Error: one ore more inout string are empty" << std::endl;
		return (content);
	}

	std::string result = content;
	size_t pos = 0;
	
    // Iterate over the content and replace s1 with s2 until end
    // Use find to search for s1 from pos
    // When a match is found, use substr to replace s1 with s2
    // Update pos to the end of s2 to continue the search
	while ((pos = result.find(s1, pos)) != std::string::npos)
	{
		result = result.substr(0, pos) + s2 + result.substr(pos + s1.length());
		pos += s2.length(); 
	}
	return (result);
}

int main(int ac, char *av[])
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./sed <filename> s1 s2" << std::endl;
		return (1);
	}
	
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	
	// open the file
	std::ifstream file(filename);
	if (!file)
	{
		std::cerr << "Error: could not open file" << std::endl;
		return (1);
	}
	
	// read file content in a string (content)
	// using an iterator-based construction that reads char from file
	std::string content((std::istreambuf_iterator<char>(file)),
	std::istreambuf_iterator<char>());
	file.close();

	// replace is a copy of content where we change s1 with s2 
	std::string replaced = replaceMatch(content, s1, s2);
	
	// create a new file with the replaced content
	std::ofstream newFile(filename + ".replace");
	if (!newFile)
	{
		std::cerr << "Error: could not create new file" << std::endl;
		return (1);
	}

	// write the new content to the new file
	newFile << replaced;
	newFile.close();

	std::cout << "File " << filename << ".replace was created with the s2 instead of s1 " << std::endl;

	return (0);
}
