/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 06:24:55 by siun              #+#    #+#             */
/*   Updated: 2024/03/10 00:45:26 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
//#include <string>
//#include <iostream>

int main()
{
    PhoneBook   phonebook;
    std::string input;

    while (1)
    {
        std::cout << "choice action: ADD, SEARCH, EXIT  : ";
        std::cin >> input;
        if (!input.compare("ADD"))
            phonebook.add();
        else if (!input.compare("SEARCH"))
        {
            phonebook.print_data();
            phonebook.search();
        }
        else if (!input.compare("EXIT"))
            break ;
        else
        {
            std::cout << "Wrong Action" << std::endl;
        }
    }
    return (0);
}