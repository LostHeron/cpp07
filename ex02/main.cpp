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

#include <iostream>
#include <stdexcept>
#include "Array.hpp"

int	main(void)
{
	Array<std::string> arr(3);
	Array<std::string> arr2;

	try
	{
		arr[1] = "coucou";
		arr[2] = "toi";

		std::cout << "arr[1] = "  << arr[1] << "\n";

		arr2 = arr;
		std::cout << "arr = " << arr << "\n";
		std::cout << "arr2 = " << arr2 << "\n";

		arr2[2] = "eheh";
		std::cout << "arr = " << arr << "\n";
		std::cout << "arr2 = " << arr2 << "\n";

		arr[3] = 4;
	}
	catch (std::out_of_range& e)
	{
		std::cout << e.what() << "\n";
	}
}
