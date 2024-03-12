/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: subpark <subpark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 22:56:15 by siun              #+#    #+#             */
/*   Updated: 2024/03/12 17:08:39 by subpark          ###   ########.fr       */
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