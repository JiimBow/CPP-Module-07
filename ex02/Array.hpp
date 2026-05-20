/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimbow <jimbow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 13:29:14 by jimbow            #+#    #+#             */
/*   Updated: 2026/05/20 15:01:35 by jimbow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
	T* 			_data;
	std::size_t	_size;
public:
	Array();
	Array(unsigned int n);
	Array(const Array<T>& copy);
	Array<T>& operator=(const Array<T>& copy);
	~Array();

	T& operator[](std::size_t index);
	const T& operator[](std::size_t index) const;

	std::size_t size(void) const;
};

#include "Array.tpp"

#endif