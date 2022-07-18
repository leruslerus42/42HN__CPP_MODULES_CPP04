/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 00:47:04 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 04:53:26 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
#include "Animal.hpp"


class Cat : public Animal
{
	private:
		/*private members*/
	public:
		Cat(void);
		~Cat(void);
		Cat(const Cat &copy);

		Cat	&operator = (const Cat &copy);

		void		setType(std::string name);
		std::string	getType() const;

		virtual void	makeSound() const;

};

#endif
