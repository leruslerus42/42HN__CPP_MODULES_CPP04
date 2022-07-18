/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 06:43:34 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 17:14:16 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal(void)
{
	this->type = "default";
	std::cout << "Constructor of Animal called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Destructor of Animal called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Copy constructor of Animal called" << std::endl;
	*this = copy;
}

Animal	&Animal::operator = (const Animal &copy)
{
	std::cout << "Assignation operator of Animal called" << std::endl;
	type = copy.type;
	return (*this);
}

void	Animal::setType(std::string name)
{
	this->type = name;
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
}

