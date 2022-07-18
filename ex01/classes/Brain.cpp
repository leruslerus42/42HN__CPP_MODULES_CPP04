/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 08:02:50 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 14:36:47 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Constructor of Brain called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Destructor of Brain called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy constructor of Brain called" << std::endl;
	*this = copy;
}

Brain	&Brain::operator= (const Brain &copy)
{
	std::cout << "Assignation operator of Brain called" << std::endl;
	int i = 0;
	while (i < 100)
	{
		idea[i] = copy.idea[i];
		i++;
	}
	return (*this);
}
