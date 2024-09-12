/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:28:40 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/10 14:13:01 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

// HumanB class declaration, needs a pointer (Weapon*) to a Weapon object
// because it may not have a weapon.. null pointer is no weapon but its possible

class HumanB
{
	public:
		HumanB(std::string name);
		void attack(void);
		void setWeapon(Weapon& weapon);
	private:
		std::string name_;
		Weapon* weapon_;
};
