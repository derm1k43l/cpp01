/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:56:53 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/11 15:45:03 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"


Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-";
	std::cout << "ketchup burger. I really do!\n" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]\n";
    std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << "You didn`t put enough bacon in my burger!\n" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]\n";
    std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I`ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level)
{
	// Define an array of function pointers, each element points to a member function of Harl
	FunctionPTR functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	// Define an array of strings where each element corresponds to a level
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	

	// Loop and compare the level received with the array of levels and if found, call it
	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cerr << "Invalid level!" << std::endl;
}
