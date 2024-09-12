/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrusu <mrusu@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:46:40 by mrusu             #+#    #+#             */
/*   Updated: 2024/09/11 11:36:54 by mrusu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"
#include <iostream>

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cerr << "Usage: ./harlfilter log_level" << std::endl;
		return (1);
	}
	
	Harl harl;
	harl.complain(av[1]);
	return (0);
}