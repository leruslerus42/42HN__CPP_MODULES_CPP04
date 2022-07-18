/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrajaobe <rrajaobe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 08:02:59 by rrajaobe          #+#    #+#             */
/*   Updated: 2022/07/18 14:36:52 by rrajaobe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string idea[100];
	public:
		Brain(void);
		virtual ~Brain(void);
		Brain(const Brain &copy);

		Brain	&operator=(const Brain &copy);
};

#endif
