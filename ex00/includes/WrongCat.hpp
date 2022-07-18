/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:33:29 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 04:40:35 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
# include <iostream>

class WrongCat : public WrongAnimal
{
	private:
		/*private members*/
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(const WrongCat &copy);

		WrongCat	&operator = (const WrongCat &copy);

		void	makeSound() const;

};

#endif
