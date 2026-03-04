/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 10:49:58 by jweber            #+#    #+#             */
/*   Updated: 2026/03/04 11:43:18 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstddef>

template <typename T>
void	iter(T a[], size_t size, void (*f)(T& elem))
{
	for (size_t	i = 0; i < size; i++)
	{
		f(a[i]);
	}
	return ;
}

template <typename T>
void	iter(const T a[], size_t size, void (*f)(const T& elem))
{
	for (size_t	i = 0; i < size; i++)
	{
		f(a[i]);
	}
	return ;
}

#endif
