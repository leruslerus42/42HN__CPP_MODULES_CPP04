/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:19:51 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 09:19:53 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Constructor of Cat called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "Destructor of Cat called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor of Cat called" << std::endl;
	*this = copy;
}

Cat	&Cat::operator = (const Cat &copy)
{
	std::cout << "Assignation operator of Cat called" << std::endl;
	return (*this);
}

void	Cat::setType(std::string name)
{
	this->type = name;
}

std::string	Cat::getType() const
{
	return (this->type);
}

void	Cat::makeSound() const
{
	std::cout << "Meooooow.." << std::endl;
}

