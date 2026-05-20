/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimbow <jimbow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 13:29:07 by jimbow            #+#    #+#             */
/*   Updated: 2026/05/20 14:49:40 by jimbow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main()
{
    Array<int> a(5);

    for (std::size_t i = 0; i < a.size(); i++)
        a[i] = i * 10;

    std::cout << "Tableau a :" << std::endl;
    for (std::size_t i = 0; i < a.size(); i++)
        std::cout << a[i] << " ";
    std::cout << std::endl;

    Array<int> b = a;

    b[0] = 999;

    std::cout << "a[0] = " << a[0] << std::endl;
    std::cout << "b[0] = " << b[0] << std::endl;

    try
    {
        std::cout << a[42] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception: index out of bounds" << std::endl;
    }

    return 0;
}