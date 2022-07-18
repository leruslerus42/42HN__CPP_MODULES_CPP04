/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 06:43:41 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 17:20:44 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Constructor of Cat called" << std::endl;
	type = "Cat";
	brain = new Brain();
	std::cout << this->brain<< "BRRRRRRAINNNNNNN" <<std::endl;

}

Cat::~Cat(void)
{
	std::cout << "Destructor of Cat called" << std::endl;
	delete brain;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Copy constructor of Cat called" << std::endl;
	brain = new Brain();
	*this = copy;
}

Cat	&Cat::operator=(const Cat &copy)
{
	std::cout << "Assignation operator of Cat called" << std::endl;
	*brain = *(copy.brain);
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

Brain		*Cat::getBrain()
{
	return (brain);
}