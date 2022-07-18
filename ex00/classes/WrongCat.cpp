/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:41:15 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 04:42:43 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"


WrongCat::WrongCat(void)
{
	std::cout << "Constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

WrongCat	&WrongCat::operator = (const WrongCat &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meooooow.." << std::endl;
}
