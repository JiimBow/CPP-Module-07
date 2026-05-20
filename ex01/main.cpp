/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimbow <jimbow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:26:53 by jimbow            #+#    #+#             */
/*   Updated: 2026/05/20 11:42:12 by jimbow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	printInt(int& x)
{
	std::cout << x << " ";
}

void	incrementInt(int& x)
{
	x++;
}

void	printFloat(float& x)
{
	std::cout << x << " ";
}

void	incrementFloat(float& x)
{
	x += 1.0f;
}

int	main()
{
	std::cout << "=== Tableau int ===" << std::endl;

	int tab[] = {1, 2, 3, 4, 5};
	std::cout << "tab :" << std::endl;
	iter(tab, 5, printInt);
	std::cout << std::endl;

	iter(tab, 5, incrementInt);
	std::cout << "new tab :" << std::endl;
	iter(tab, 5, printInt);
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "=== Tableau float ===" << std::endl;

	float tab2[] = {1.5f, 2.5f, 3.5f, 4.5f, 5.5f};
	std::cout << "tab2 :" << std::endl;
	iter(tab2, 5, printFloat);
	std::cout << std::endl;

	iter(tab2, 5, incrementFloat);
	std::cout << "new tab2 :" << std::endl;
	iter(tab2, 5, printFloat);
	std::cout << std::endl;
}