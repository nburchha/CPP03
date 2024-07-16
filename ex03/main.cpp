/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburchha <nburchha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:38:48 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/16 13:04:30 by nburchha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap FC1("John");

	for (int i = 0; i < 100; i++)
		FC1.attack("anyone");
	FC1.takeDamage(5);
	FC1.beRepaired(100);
	FC1.highFivesGuys();
	return (0);
}
