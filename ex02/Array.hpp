/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 16:16:02 by jweber            #+#    #+#             */
/*   Updated: 2026/03/04 16:16:56 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
	public:
		Array<T>();
		Array<T>(unsigned int n);
		Array<T>(const Array<T>& other);
		~Array<T>();

		Array<T>&	operator=(const Array<T>& other);

		unsigned int	size();
		const T&	operator[](unsigned int) const;
		T&			operator[](unsigned int) ;

	private:
		T	*data;
		unsigned int len;
};

# include "Array.tpp"

#endif
