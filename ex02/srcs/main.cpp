/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:28:15 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/10 12:42:03 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	// str with the value "HI THIS IS BRAIN"
	std::string str = "HI THIS IS BRAIN";
	
	// string pointer to str
	std::string* stringPTR = &str;
	
	// string reference to str
	std::string& stringREF = str;

	std::cout << "Memory adress of the string: " << &str << std::endl;
	std::cout << "Memory adress of stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory adress of stringREF: " << &stringREF << std::endl;
	std::cout << "Value of the string: " << str << std::endl;
	std::cout << "Value of stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value of stringREF: " << stringREF << std::endl;

	return (0);	
}