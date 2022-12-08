# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 22:43:04 by amiguez           #+#    #+#              #
#    Updated: 2022/12/06 03:30:08 by amiguez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Fixed

SRCS := main.cpp\
		Fixed.cpp

INCLUDES := Fixed.hpp

OBJS := $(SRCS:.cpp=.o)

CC := c++

CFLAGS := -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDES)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all