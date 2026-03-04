/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 09:35:10 by jweber            #+#    #+#             */
/*   Updated: 2026/03/03 09:43:39 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T& l, T& r)
{
	T tmp;
	tmp = l;
	l = r;
	r = tmp;
}

template<typename T>
const T& max(const T& l, const T& r)
{
	return ((l >= r) ? l : r);
}

template<typename T>
const T& min(const T& l, const T& r)
{
	return ((l <= r) ? l : r);
}

#endif
