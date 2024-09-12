/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:38:42 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/11 13:49:43 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : name_(name)
{
}

Zombie::Zombie() : name_("Anonymous Zombie")
{
}

Zombie::~Zombie()
{
	std::cout << name_ << ": is destroyed!" << std::endl;
}

void Zombie::announce()
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& name)
{
	this->name_ = name;
}