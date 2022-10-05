# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 01:46:09 by amiguez           #+#    #+#              #
#    Updated: 2022/09/20 02:46:30 by amiguez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Phonebook

SRCS := PhoneBook.class.cpp Contact.class.cpp main.cpp

OBJS := $(SRCS:.cpp=.o)

CC := g++

CFLAGS := -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean

re: fclean all