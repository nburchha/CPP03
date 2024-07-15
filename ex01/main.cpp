/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:38:48 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/15 14:31:50 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap SC1("John");

	SC1.attack("a man");
	SC1.takeDamage(5);
	SC1.beRepaired(100);
	for (int i = 0; i < 48; i++)
		SC1.attack("anyone");
	SC1.attack("his evaluator");
	SC1.guardGate();
	SC1.guardGate();
	return (0);
}
