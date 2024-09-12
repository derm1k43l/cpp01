/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:38:46 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/09 15:10:39 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

// Allocates memory for a new Zombie object on the heap, return a pointer
Zombie* newZombie(std::string name)
{
	Zombie* heap_zombie = new Zombie(name);
	heap_zombie->announce();
	return (heap_zombie);
}