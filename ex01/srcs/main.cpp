/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:53:07 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/11 14:17:45 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void)
{
	Zombie* horde;
	int N = 5;
	
	// Zombie announces itself and is created on the heap
	horde = zombieHorde(N, "Zombie");
	if (horde == nullptr)
	{
		std::cout << "Failed to create the horde." << std::endl;
		return (1);
	}

	if (N > 42)
		N = 42;

	for (int i = 0; i < N; i++)
		horde[i].announce();

	// Zombie is destroyed (free memory);
	delete[] horde;

	return (0);
}