/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:19:57 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 09:19:59 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Constructor of Dog called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "Destructor of Dog called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy constructor of Dog called" << std::endl;
	*this = copy;
}

Dog	&Dog::operator = (const Dog &copy)
{
	std::cout << "Assignation operator of Dog called" << std::endl;
	return (*this);
}

void	Dog::setType(std::string name)
{
	this->type = name;
}

std::string	Dog::getType() const
{
	return (this->type);
}


void	Dog::makeSound() const
{
	std::cout << "Bauuuuu.." << std::endl;
}