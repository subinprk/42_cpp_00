/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siun <siun@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:56:15 by siun              #+#    #+#             */
/*   Updated: 2024/03/10 11:31:30 by siun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

# include "Contact.hpp"
# include "tools.hpp"
# include <cstdlib>


class PhoneBook
{
    private:
        Contact _contacts[8];
        int     _index;

    public:
        void    add();
        void    search();
        void    print_data();
        //void    regenerate_contacts();
        
        PhoneBook();
};

#endif