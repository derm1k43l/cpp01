/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:36:34 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/11 14:17:02 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
#include <sstream>

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "Really? We are not US GOV to creat debt." << std::endl;
		return (nullptr);
	}
	else if (N == 1)
	{
		std::cout << "Only one zombie? That's not a horde! but let's not get philosophical, here is your zombie:" << std::endl;
	}
	else if (N > 42)
	{
		std::cout << "Best i can do is 42 cents... zombie i mean" << std::endl;
		N = 42;
	}
	
	// Allocate memory for N zombies
	Zombie* horde = new Zombie[N];
	if (horde == nullptr)
	{
		std::cout << "Failed to allocate memory for the horde." << std::endl;
		return (nullptr);
	}
	
	for (int i = 0; i < N; i++)
		horde[i].setName(name + " #" + std::to_string(i + 1));

	return (horde);
}
