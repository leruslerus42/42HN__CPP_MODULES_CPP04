/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 06:43:28 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 14:00:30 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;

	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &copy);

		Dog	&operator = (const Dog &copy);

		void		setType(std::string name);
		std::string	getType() const;

		virtual void	makeSound() const;

		Brain	*getBrain();


};

#endif
