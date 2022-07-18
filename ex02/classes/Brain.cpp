/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:19:47 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 09:19:50 by rrajaobe         ###   ########.fr       */
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
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Brain	&Brain::operator = (const Brain &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}
