/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:19:37 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 17:29:35 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Cat.hpp"
#include "./includes/Dog.hpp"


int main()
{
	//TEST 1
	//const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	//meta->makeSound();

	//TEST 2
	// const WrongAnimal* meta = new WrongAnimal();
	// const	WrongAnimal* i = new WrongCat();

	// i->makeSound();
	// meta->makeSound();

	//delete meta;
	delete j;
	delete i;

	system("leaks abstract_class");
	return (0);
}
