/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimbow <jimbow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 10:21:09 by jimbow            #+#    #+#             */
/*   Updated: 2026/05/20 11:02:33 by jimbow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>

void	swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>

T	min(T a, T b)
{
	return (a < b) ? a : b;
}

template <typename T>

T max(T a, T b)
{
	return (a > b) ? a : b;
}
