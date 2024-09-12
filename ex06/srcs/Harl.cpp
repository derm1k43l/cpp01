/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:56:53 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/11 15:48:30 by mrusu            ###   ########.fr       */
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
    std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "I`ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]\n";
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

char Harl::getLevel(const std::string& level)
{
	if (level == "DEBUG") return 'D';
	if (level == "INFO") return 'I';
	if (level == "WARNING") return 'W';
	if (level == "ERROR") return 'E';
	return ('?');
}

void Harl::complain(std::string level)
{
	switch (getLevel(level))
	{
		case 'D':
			debug();
		case 'I':
			info();
		case 'W':
			warning();
		case 'E':
			error();
			break;
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}
