/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:45:29 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 04:53:32 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
	private:
		/*private members*/
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog &copy);

		Dog	&operator = (const Dog &copy);

		void		setType(std::string name);
		std::string	getType() const;

		virtual void	makeSound() const;

};

#endif
