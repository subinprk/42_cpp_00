/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 06:29:17 by siun              #+#    #+#             */
/*   Updated: 2024/03/10 17:12:56 by siun             ###   ########.fr       */
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

// void PhoneBook::regenerate_contacts()
// {
// 	~_contacts[_index];

// }

void PhoneBook :: add()
{
	std::string data;

	std::cout << "First Name: ";
	std::cin >> data;
	_contacts[_index].put_first_name(data);
			std::cout << "last Name: ";
			std::cin >> data;
			 _contacts[_index].put_last_name(data);
	std::cout << "Nickname: ";
	std::cin >> data;
	_contacts[_index].put_nickname(data);
			std::cout << "Number: ";
			std::cin >> data;
			_contacts[_index].put_number(data);
	std::cout << "Darkest Secret: ";
	std::cin >> data;
	_contacts[_index].put_secret(data);
	if (_index >= 7)
		return ;
	 _index = _index + 1;
}

void PhoneBook :: search()
{
	std::string tmp;
	int			index_input;

	std::cout << "Put the index to check the Number: ";
	std::cin >> tmp;
	index_input = std::atoi(tmp.c_str()) - 1;
	if((_index != 7) && (_index <= 0 || index_input + 1 > _index || index_input + 1 <= 0))
		std::cout << "Out of Scope\n";
	else if (_index == 7 && _contacts[7].read_data(FIRST_NAME) == "")
		std::cout << "Out of Scope\n";
	else if (index_input > 7)
		std::cout << "Out of Scope\n";
	else
	{
		std::cout << "First Name: " << _contacts[index_input].read_data(FIRST_NAME) << std::endl;
		std::cout << "Last Name: " << _contacts[index_input].read_data(LAST_NAME) << std::endl;
		std::cout << "Nickname: " << _contacts[index_input].read_data(NICKNAME) << std::endl;
		std::cout << "Number: " << _contacts[index_input].read_data(NUMBER) << std::endl;
		std::cout << "Darkest Secret: " << _contacts[index_input].read_data(SECRET) << std::endl;
	}
}

void PhoneBook :: print_data()
{
	std::cout << std::endl;
	printing_column_info();
	for (int i = 0; i < _index; i ++)
	{
		std::cout << "         " << i + 1 << "|";
		printing_ten(_contacts[i].read_data(FIRST_NAME), 0);
		printing_ten(_contacts[i].read_data(LAST_NAME), 0);
		printing_ten(_contacts[i].read_data(NICKNAME), 1);
	}
	if (_index == 7 && _contacts[7].read_data(FIRST_NAME) != "")
	{
		std::cout << "         " << 8 << "|";
		printing_ten(_contacts[7].read_data(FIRST_NAME), 0);
		printing_ten(_contacts[7].read_data(LAST_NAME), 0);
		printing_ten(_contacts[7].read_data(NICKNAME), 1);
	}
	// 	printing_ten(std::iota(_index), (i == _index - 1));
	// for (int i = 0; i < _index; i ++)
	// 	printing_ten(_contacts[i].read_data(FIRST_NAME), (i == _index - 1));
	// std::cout << std::endl;
	// for (int i = 0; i < _index; i ++)
	// 	printing_ten(_contacts[i].read_data(LAST_NAME), (i == _index - 1));
	// std::cout << std::endl;
	// for (int i = 0; i < _index; i ++)
	// 	printing_ten(_contacts[i].read_data(NICKNAME), (i == _index - 1));
	//std::cout << std::endl;
}