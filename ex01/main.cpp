/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 06:24:55 by siun              #+#    #+#             */
/*   Updated: 2024/03/12 17:05:58 by subpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <csignal>
//#include <string>
//#include <iostream>

int main()
{
    PhoneBook   phonebook;
    std::string input;

    std::signal(SIGQUIT, SIG_IGN);
    while (1)
    {
        if (std::cin.eof()) {
            std::cout << "EOF encountered. Exiting..." << std::endl;
            break;
        }
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
            std::cout << "Wrong Action" << std::endl;
    }
    return (0);
}