/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:28:42 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/10 14:13:43 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Weapon.hpp"

// HumanA class declaration, needs a reference (Weapon&) to a Weapon object
// because it allways has a weapon we initialize it in the constructor

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		void attack(void);
	private:
		std::string name_;
		Weapon& weapon_;
};