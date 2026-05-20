/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimbow <jimbow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 14:54:51 by jimbow            #+#    #+#             */
/*   Updated: 2026/05/20 15:04:00 by jimbow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>

template <typename T>
Array<T>::Array() : _data(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_data = new T[n]();
}

template <typename T>
Array<T>::Array(const Array<T>& copy) : _size(copy._size)
{
	_data = new T[_size];
	for (std::size_t i = 0; i < _size; i++)
		_data[i] = copy._data[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& copy)
{
	if (this != &copy)
	{
		delete [] _data;

		_size = copy._size;
		_data = new T[_size];
		for (std::size_t i = 0; i < _size; i++)
			_data[i] = copy._data[i];
		
		return *this;
	}
}

template <typename T>
Array<T>::~Array()
{
	delete [] _data;
}

template <typename T>
T& Array<T>::operator[](std::size_t index)
{
	if (index >= _size)
		throw std::exception();

	return _data[index];
}

template <typename T>
const T& Array<T>::operator[](std::size_t index) const
{
	if (index >= _size)
		throw std::exception();

	return _data[index];
}

template <typename T>
std::size_t Array<T>::size() const
{
	return _size;
}