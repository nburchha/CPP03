/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niklasburchhardt <niklasburchhardt@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:38:48 by niklasburch       #+#    #+#             */
/*   Updated: 2024/07/15 14:00:12 by niklasburch      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap P1("Hans");
	ClapTrap P2("Peter");
	ClapTrap P3;

	P1.attack("Peter");
	P2.takeDamage(9);
	P2.beRepaired(5);
	P2.attack("Hans");
	P1.takeDamage(5);
	for (int i = 0; i < 8; i++)
		P2.attack("Hans");
	P2.attack("default");
	P3.attack("his evaluator");
}
