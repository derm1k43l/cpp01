/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:55:46 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/10 14:14:06 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon) : name_(name), weapon_(weapon)
{
}

void HumanA::attack(void)
{
	std::cout << name_ << " attacks with " << weapon_.getType() << std::endl;
}