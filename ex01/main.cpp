/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 09:36:29 by jweber            #+#    #+#             */
/*   Updated: 2026/03/04 11:44:13 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

template <typename T>
void increment(T& a);

template <typename T>
void print(const T& a);

void print_str(const std::string& a);

int	main(void)
{
	//foo a[] = {foo(3), foo(4), foo(1), foo(-1)};
	{
		std::string a[] = {"coucou", "toi" ,"chou"};
		std::cout << "sizeof(a)/sizeof(foo) = " << sizeof(a)/sizeof(*a) << "\n";
		iter(a, sizeof(a)/sizeof(*a), print);
		std::cout << "\n";
		iter(a, sizeof(a)/sizeof(*a), print_str);
		std::cout << "\n\n\n";
	}

	{
		int a[] = {1,2,3};
		std::cout << "sizeof(a)/sizeof(foo) = " << sizeof(a)/sizeof(*a) << "\n";
		iter(a, sizeof(a)/sizeof(*a), print);
		std::cout << "\n";
		iter(a, sizeof(a)/sizeof(*a), increment);
		std::cout << "\n";
		iter(a, sizeof(a)/sizeof(*a), print);
		std::cout << "\n\n\n";
	}
}

template <typename T>
void print(const T& a)
{
	std::cout << a << ", ";
}

template <typename T>
void increment(T& a)
{
	a++;
}

void print_str(const std::string& a)
{
	std::cout << "str = " << a << ", ";
}
