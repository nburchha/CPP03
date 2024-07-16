/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:05:59 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/15 14:38:04 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_isGuarding = false;
	std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	_isGuarding = false;
	std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	_isGuarding = other._isGuarding;
	std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	ClapTrap::operator=(other);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " has been destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
		--_energyPoints;
	else {
		std::cout << "ScavTrap " << _name << " cannot attack, too little energy or health points!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	std::cout << "ScavTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
		--_energyPoints;
	else {
		std::cout << "ScavTrap " << _name << " cannot repair, too little energy or health points!" << std::endl;
		return ;
	}
	_hitPoints += amount;
	std::cout << "ScavTrap " << _name << " is being repaired for " << amount << " points!" << std::endl;
}

void ScavTrap::guardGate()
{
	if (_isGuarding)
	{
		std::cout << "ScavTrap " << _name << " is already guarding the gate!" << std::endl;
		return ;
	}
	_isGuarding = true;
	std::cout << "ScavTrap " << _name << " has entered gate keeper mode!" << std::endl;
}
