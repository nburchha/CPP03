/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:06:03 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/15 14:32:12 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		bool _isGuarding;
	public:
		ScavTrap(std::string name);
		ScavTrap();
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		~ScavTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate();
};