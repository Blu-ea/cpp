# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 01:46:09 by amiguez           #+#    #+#              #
#    Updated: 2023/02/06 13:09:43 by amiguez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Phonebook

SRCS :=	PhoneBook.class.cpp\
		Contact.class.cpp\
		main.cpp

INCLUDES :=	PhoneBook.class.hpp\
			Contact.class.hpp

OBJS := $(SRCS:.cpp=.o)

CC := g++

CFLAGS := -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp $(SRCS) $(INCLUDES) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all