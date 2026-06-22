/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jweber <jweber@student.42Lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 13:53:22 by jweber            #+#    #+#             */
/*   Updated: 2026/03/04 16:17:39 by jweber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <iostream>
#include <stdexcept>
#include "Array.hpp"

# define MSG(function) \
std::cout << "~~~~~~~~~~~~~~~ " #function " ~~~~~~~~~~~~~~~~~~~~~\n";\
function;\
std::cout << "~~~~~~~~~~~~~~~ END ~~~~~~~~~~~~~~~~~~~~~\n\n\n";

void	test_copy_constructor(void);
void	test_assignement_operator(void);
void	test_multi_assignement_operator(void);
void	test_out_of_range_access(void);

int	main(void)
{
	MSG(test_copy_constructor());
	MSG(test_assignement_operator());
	MSG(test_multi_assignement_operator());
	MSG(test_out_of_range_access());
}

void	test_copy_constructor(void)
{
	Array<std::string> arr1(3);

	try
	{
		arr1[0] = "coucou";
		arr1[1] = "toi";

		Array<std::string> arr2(arr1);
		std::cout << "arr1 = " << arr1 << "\n";
		std::cout << "arr2 = " << arr2 << "\n";

		arr2[1] = "eheh";
		std::cout << "arr1 = " << arr1 << "\n";
		std::cout << "arr2 = " << arr2 << "\n";
	}
	catch (std::out_of_range& e)
	{
		std::cout << e.what() << "\n";
	}
}

void	test_assignement_operator(void)
{
	Array<std::string> arr1(3);
	Array<std::string> arr2;

	std::cout << "arr1 = " << arr1 << "\n";
	std::cout << "arr2 = " << arr2 << "\n";

	try
	{
		arr1[0] = "coucou";
		arr1[1] = "toi";

		arr2 = arr1;
		std::cout << "arr1 = " << arr1 << "\n";
		std::cout << "arr2 = " << arr2 << "\n";

		arr2[1] = "eheh";
		std::cout << "arr1 = " << arr1 << "\n";
		std::cout << "arr2 = " << arr2 << "\n";
	}
	catch (std::out_of_range& e)
	{
		std::cout << e.what() << "\n";
	}
}

void	test_multi_assignement_operator(void)
{
	Array<std::string> arr1(3);
	Array<std::string> arr2;

	try
	{
		arr1[0] = "coucou";
		arr1[1] = "toi";

		arr2 = arr1;
		std::cout << "arr1 = " << arr1 << "\n";
		std::cout << "arr2 = " << arr2 << "\n";

		arr2[1] = "eheh";
		std::cout << "arr1 = " << arr1 << "\n";
		std::cout << "arr2 = " << arr2 << "\n";

		arr2 = arr1;
		std::cout << "arr1 = " << arr1 << "\n";
		std::cout << "arr2 = " << arr2 << "\n";

		arr2[1] = "eheh";
		std::cout << "arr1 = " << arr1 << "\n";
		std::cout << "arr2 = " << arr2 << "\n";
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
}

void	test_out_of_range_access(void)
{
	Array<std::string> arr1(3);
	std::cout << arr1.size() << "\n";
	try
	{
		std::cout << "arr1 = " << arr1 << "\n";
		arr1[0] = "coucou";
		std::cout << "arr1 = " << arr1 << "\n";
		arr1[1] = "toi";
		std::cout << "arr1 = " << arr1 << "\n";
		arr1[2] = "toi";
		std::cout << "arr1 = " << arr1 << "\n";
		arr1[3] = "toi";
		std::cout << "arr1 = " << arr1 << "\n";
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
}
