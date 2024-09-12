/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:53:07 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/09 15:14:10 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void)
{
	Zombie* heapZombie;
	
	// Zombie announces itself and is created on the heap
	heapZombie= newZombie("Heap Zombie");
	
	// Zombie announces itself and is created on the stack
	randomChump("Stack Zombie");

	// Zombie is destroyed (free memory);
	delete heapZombie;

	// the Heap Zombie is destroyed when the program ends

	return (0);
}