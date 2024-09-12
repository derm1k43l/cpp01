/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:58:47 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/11 14:39:19 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>


HumanB::HumanB(std::string name) : name_(name), weapon_(nullptr)
{
}

void HumanB::setWeapon(Weapon& weapon)
{
	weapon_ = &weapon;
}

void HumanB::attack(void)
{
	if (weapon_)
		std::cout << name_ << " attacks with " << weapon_->getType() << std::endl;
	else
		std::cout << name_ << " got no weapon. But he stare you down." <<std::endl;
}
