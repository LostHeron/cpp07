/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/03 09:36:29 by jweber            #+#    #+#             */
/*   Updated: 2026/03/03 09:44:57 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>

int	main(void)
{
	std::cout.precision(1);
	std::cout << std::fixed;
	// test swap on ints
	{
		int	a = 3;
		int b = 4;
		std::cout << "a = " << a << "\n";
		std::cout << "b = " << b << "\n";
		::swap(a, b);
		std::cout << "a = " << a << "\n";
		std::cout << "b = " << b << "\n";
		std::cout << "\n\n";
	}

	// test swap on	string 
	{
		std::string a = "cow";
		std::string b = "horse";
		std::cout << "a = " << a << "\n";
		std::cout << "b = " << b << "\n";
		::swap(a, b);
		std::cout << "a = " << a << "\n";
		std::cout << "b = " << b << "\n";
		std::cout << "\n\n";
	}

	// test min on ints
	{
		int	min = 3;
		int max = 4;
		std::cout << "min = " << min << "\n";
		std::cout << "max = " << max << "\n";
		std::cout << "::min(min, max) = " << ::min(min, max) << "\n";
		std::cout << "\n\n";
	}

	// test min on string
	{
		std::string min = "coucou";
		std::string max = "ahah";
		std::cout << "min = " << min << "\n";
		std::cout << "max = " << max << "\n";
		std::cout << "::min(min, max) = " << ::min(min, max) << "\n";
		std::cout << "\n\n";
	}

	// test max on ints
	{
		int	min = 3;
		int max = 4;
		std::cout << "min = " << min << "\n";
		std::cout << "max = " << max << "\n";
		std::cout << "::max(min, max) = " << ::max(min, max) << "\n";
		std::cout << "\n\n";
	}

	// test max on string
	{
		std::string min = "coucou";
		std::string max = "ahah";
		std::cout << "min = " << min << "\n";
		std::cout << "max = " << max << "\n";
		std::cout << "::max(min, max) = " << ::max(min, max) << "\n";
		std::cout << "\n\n";
	}

}

/* 
// given main : 
int main( void ) {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
*/
