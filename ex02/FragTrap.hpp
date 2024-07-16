/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburchha <nburchha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:06:03 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/16 13:03:58 by nburchha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap();
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		~FragTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void highFivesGuys();
};