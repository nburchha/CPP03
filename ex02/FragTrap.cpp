/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburchha <nburchha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:05:59 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/16 13:03:49 by nburchha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " has been created!" << std::endl;
}

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap " << _name << " has been created!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	ClapTrap::operator=(other);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
		--_energyPoints;
	else {
		std::cout << "FragTrap " << _name << " cannot attack, too little energy or health points!" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	std::cout << "FragTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
		--_energyPoints;
	else {
		std::cout << "FragTrap " << _name << " cannot repair, too little energy or health points!" << std::endl;
		return ;
	}
	_hitPoints += amount;
	std::cout << "FragTrap " << _name << " is being repaired for " << amount << " points!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
