/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 00:37:52 by siun              #+#    #+#             */
/*   Updated: 2024/03/10 00:52:06 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tools.hpp"

void    printing_ten(const std::string str, bool end)
{
	int length = str.length();

	for(int i = 0; 10 - length > i; i ++)
		std::cout << " ";
	for(int i = 0; i < length - 1; i ++)
		std::cout << str[i];
	if(length >= 10)
		std::cout << ".";
	else
		std::cout << str[length - 1];
	if (!end)
		std::cout << "|";
	else
		std::cout << std::endl;
}

void	printing_column_info()
{
	printing_ten("index", 0);
	printing_ten("first name", 0);
	printing_ten("last name", 0);
	printing_ten("nickname", 1);
	std::cout << std::endl;
}

// void	printing_index(PhoneBook phonebook)
// {
// 	for (int i = 0; i < phonebook._index; i ++)
// 		printing_ten(phonebook::_con)
// }