/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburchha <nburchha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:38:48 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/22 10:25:04 by nburchha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap DT1("Walter");

	std::cout << std::endl;
	DT1.whoAmI();
	DT1.attack("his evaluator");
	DT1.guardGate();
	DT1.beRepaired(1);
	for (int i = 0; i < 4; i++)
		DT1.attack("a stone");
	DT1.beRepaired(50);
	DT1.whoAmI();
	std::cout << std::endl;
}
