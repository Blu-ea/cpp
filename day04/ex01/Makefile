# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 11:17:38 by amiguez           #+#    #+#              #
#    Updated: 2023/03/04 05:24:23 by amiguez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := animal

SRCS := main.cpp\
		animal.cpp\
		brain.cpp

INCLUDES := animal.hpp\
			brain.hpp

OBJS := $(SRCS:.cpp=.o)

CC := c++

CFLAGS := -Wall -Wextra -Werror -std=c++98 -g3

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp $(INCLUDES) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all