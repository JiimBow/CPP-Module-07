/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimbow <jimbow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:08:35 by jimbow            #+#    #+#             */
/*   Updated: 2026/05/20 11:25:46 by jimbow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename F>

void	iter(T* array, const std::size_t lenght, F func)
{
	for (std::size_t i = 0; i < lenght; i++)
		func(array[i]);
}

#endif