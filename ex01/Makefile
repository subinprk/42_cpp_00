# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: subpark <subpark@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/27 06:23:44 by siun              #+#    #+#              #
#    Updated: 2024/03/12 14:56:23 by subpark          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp PhoneBook.cpp tools.cpp
HDRS = $(SRC:.cpp=.h)
OBJ = $(SRC:.cpp=.o)
CC = c++
RM = rm -f
CPPFLAGS = -g -Wall -Wextra -Werror -std=c++98

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJ) main.o
	$(CC) $(CPPFLAGS) $(OBJ) main.cpp -o $(NAME)

clean:
	$(RM) $(OBJ) main.o

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re