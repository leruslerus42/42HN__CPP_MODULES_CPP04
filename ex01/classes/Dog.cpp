/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 06:43:46 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 17:38:03 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Constructor of Dog called" << std::endl;
	type = "Dog";
	brain = new Brain();
	std::cout << this->brain<< "BRRRRRRAINNNNNNN" <<std::endl;

}

Dog::~Dog(void)
{
	std::cout << "Destructor of Dog called" << std::endl;
	delete brain;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Copy constructor of Dog called" << std::endl;
	brain = new Brain();
	*this = copy;
}

Dog	&Dog::operator=(const Dog &copy)
{
	std::cout << "Assignation operator of Dog called" << std::endl;
	*brain = *(copy.brain);
	return (*this);
}

void	Dog::setType(std::string name)
{
	this->type = name;
}

void	Dog::makeSound() const
{
	std::cout << "Bauuuuu.." << std::endl;
}

Brain		*Dog::getBrain()
{
	return (brain);
}