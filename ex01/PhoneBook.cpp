/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 06:29:17 by siun              #+#    #+#             */
/*   Updated: 2024/03/12 20:57:56 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
#include <string>
#include "PhoneBook.hpp"

PhoneBook :: PhoneBook()
{
	_index = 0;
	std::cout << "Phone Book Started" << std::endl;

}

void PhoneBook :: add()
{
	std::string data;

	std::cout << "First Name: ";
	std::getline(std::cin, data);
	_contacts[_index].put_first_name(data);
			std::cout << "last Name: ";
			std::getline(std::cin, data);
			 _contacts[_index].put_last_name(data);
	std::cout << "Nickname: ";
	std::getline(std::cin, data);
	_contacts[_index].put_nickname(data);
			std::cout << "Number: ";
			std::getline(std::cin, data);
			_contacts[_index].put_number(data);
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, data);
	_contacts[_index].put_secret(data);
	 _index = (_index + 1) % 8;
}

void PhoneBook :: search()
{
	std::string tmp;
	int			index_input;

	std::cout << "Put the index to check the Number: ";
	std::getline(std::cin, tmp);
	index_input = std::atoi(tmp.c_str()) - 1;
	if (index_input < 0)
	{
		std::cout << "Out of Scope\n";
		return ;
	}
	else if (index_input < 8 && _contacts[index_input].read_data(FIRST_NAME) != "")
	{
		std::cout << "First Name: " << _contacts[index_input].read_data(FIRST_NAME) << std::endl;
		std::cout << "Last Name: " << _contacts[index_input].read_data(LAST_NAME) << std::endl;
		std::cout << "Nickname: " << _contacts[index_input].read_data(NICKNAME) << std::endl;
		std::cout << "Number: " << _contacts[index_input].read_data(NUMBER) << std::endl;
		std::cout << "Darkest Secret: " << _contacts[index_input].read_data(SECRET) << std::endl;
		return ;
	}
	std::cout << "Out of Scope\n";
		return ;
}

void PhoneBook :: print_data()
{
	std::cout << std::endl;
	printing_column_info();
	for (int i = 0; (i < 8 && _contacts[i].read_data(FIRST_NAME) != ""); i ++)
	{
		std::cout << "         " << i + 1 << "|";
		printing_ten(_contacts[i].read_data(FIRST_NAME), 0);
		printing_ten(_contacts[i].read_data(LAST_NAME), 0);
		printing_ten(_contacts[i].read_data(NICKNAME), 1);
	}
}