/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:02:56 by siun              #+#    #+#             */
/*   Updated: 2024/03/10 11:33:20 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>
# define FIRST_NAME 0
# define LAST_NAME 1
# define NICKNAME 2
# define NUMBER 3
# define SECRET 4

class Contact
{
    private:
        std::string _first_name, _last_name, _nickname;
        std::string _number;
        std::string _darkest_secret;

    public:
        void put_first_name(const std::string first_name);
        void put_last_name(const std::string last_name);
        void put_nickname(const std::string nickname);
        void put_number(const std::string number);
        void put_secret(const std::string secret);

        std::string read_data(int data_info);
        //~Contact();
};
#endif