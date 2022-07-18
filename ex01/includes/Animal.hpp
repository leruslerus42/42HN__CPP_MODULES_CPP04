/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 06:43:14 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 13:49:57 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	private:
		/*private members*/
	protected:
		std::string	type;
		
	public:
		Animal(void);
		virtual ~Animal(void);
		Animal(const Animal &copy);

		Animal	&operator = (const Animal &copy);

		void		setType(std::string name);
		std::string	getType() const;
		
		virtual void	makeSound() const;


};

#endif
