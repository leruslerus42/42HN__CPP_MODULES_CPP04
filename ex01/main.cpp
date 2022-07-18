/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 06:42:41 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 17:30:20 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/Cat.hpp"
#include "./includes/Dog.hpp"
/*
Shallow copy:
Some members of the copy may reference the same objects as the original.
In shallow copy, an object is created by simply copying the data of all variables of the original object. 
This works well if none of the variables of the object are defined in the heap section of memory. 
If some variables are dynamically allocated memory from heap section, then the copied object variable will also reference the same memory location.

Deep copy:
All members of the original are cloned (recursively, if necessary). There are no shared objects.
In Deep copy, an object is created by copying data of all variables, and it also allocates similar memory resources with the same value to the object.
 In order to perform Deep copy, we need to explicitly define the copy constructor and assign dynamic memory as well, if required.
  Also, it is required to dynamically allocate memory to the variables in the other constructors, as well.
*/

/*The default copy constructor and default assignment operators do shallow copies, which is fine for classes that contain no dynamically allocated variables. 
Classes with dynamically allocated variables need to have a copy constructor and assignment operator that do a deep copy.*/

int main()//IMPLEMENT SHALLOW/DEEP COPY
{
	int	i = 0;
	
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();

	std::cout << "*********************************************" << std::endl;
	Animal* array [4];
	while (i < 4)
	{
		i > 1 ? array[i] = new Cat : array[i] = new Dog;
		std::cout << array[i]->getType() << " object is at memory adresse: " << array[i] << std::endl;
		i++;
	}
	std::cout << "*********************************************" << std::endl;


	std::cout << "DEEP COPIES" << std::endl;
	
	Dog doggy;
	Dog doggy_copy = doggy;

	std::cout << doggy.getBrain() << std::endl;
	std::cout << doggy_copy.getBrain() << std::endl;
	
	std::cout << "*********************************************" << std::endl;

	delete cat;
	delete dog;
	
	system("leaks brain");
	return (0);
}