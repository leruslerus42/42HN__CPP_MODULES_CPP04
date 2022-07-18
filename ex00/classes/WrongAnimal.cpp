/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:41:37 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 04:43:28 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

WrongAnimal	&WrongAnimal::operator = (const WrongAnimal &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "????????" << std::endl;
}
