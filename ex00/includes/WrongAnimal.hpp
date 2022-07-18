/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 04:33:38 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 04:36:12 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	private:
		/*private members*/
	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(const WrongAnimal &copy);

		WrongAnimal	&operator = (const WrongAnimal &copy);

		void	makeSound() const;
};

#endif
