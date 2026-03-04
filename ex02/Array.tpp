/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 12:57:45 by jweber            #+#    #+#             */
/*   Updated: 2026/03/04 16:17:50 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <string>
# include <cstddef>
# include <stdexcept>
# include <iostream>
# include <sstream>

template<typename T>
Array<T>::Array():
	data(NULL),
	len(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n):
	data(new T[n]()),
	len(n)
{
}

template<typename T>
Array<T>::Array(const Array<T>& other):
	data(NULL),
	len(0)
{
	*this = other;
}

template<typename T>
Array<T>::~Array()
{
	len = 0;
	delete[] data;
}

template<typename T>
Array<T>&	Array<T>::operator=(const Array<T>& other)
{
	if (this->data != NULL)
		delete[] this->data;
	data = new T[other.len];
	for (unsigned int i = 0; i < other.len; i++)
	{
		data[i] = other.data[i];
	}
	this->len = other.len;
	return (*this);
}

void	throw_error_index(unsigned int i);

template <typename T>
const T&	Array<T>::operator[](unsigned int i) const
{
	if (i >= this->len)
	{
		throw_error_index(i);
	}
	return (this->data[i]);
}

template <typename T>
T&		Array<T>::operator[](unsigned int i)
{
	if (i >= this->len)
	{
		throw_error_index(i);
	}
	return (this->data[i]);
}

void	throw_error_index(unsigned int i)
{
	std::string	str;
	std::stringstream ss;
	ss << "index ";
	ss << i;
	ss << " is out of range";
	std::getline(ss, str);
	throw std::out_of_range(str);
}

template<typename T>
unsigned int	Array<T>::size()
{
	return (this->len);
}

template<typename T>
std::ostream&	operator<<(std::ostream& os, Array<T> arr)
{
	os << "there are " << arr.size() << " elements: ";
	for (unsigned int i = 0; i < arr.size(); i++)
		os << "'" << arr[i] << "', ";
	os << "\n";
	return (os);
}

#endif
