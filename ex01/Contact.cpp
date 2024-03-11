/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 00:12:26 by siun              #+#    #+#             */
/*   Updated: 2024/03/10 11:52:22 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "tools.hpp"

void Contact::put_first_name(std::string first_name)
{
	_first_name = first_name;
}

void Contact::put_last_name(std::string last_name)
{
	_last_name = last_name;
}

void Contact::put_nickname(std::string nickname)
{
	_nickname = nickname;
}

void Contact::put_number(std::string number)
{
	_number = number;
}

void Contact::put_secret(std::string secret)
{
	_darkest_secret = secret;
}

std::string Contact::read_data(int data_info)
{
	switch (data_info)
	{
		case FIRST_NAME:
			return (_first_name);
			break;
		case LAST_NAME:
			return (_last_name);
			break;
		case NICKNAME:
			return (_nickname);
			break;
		case NUMBER:
			return (_number);
			break;
		case SECRET:
			return (_darkest_secret);
			break;
		default:
			break;
	}
	return (NULL);
}
