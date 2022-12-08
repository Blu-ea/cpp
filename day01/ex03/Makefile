# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 22:43:04 by amiguez           #+#    #+#              #
#    Updated: 2022/11/28 16:02:22 by amiguez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := Weapon

SRCS := main.cpp\
		HumanA.cpp\
		HumanB.cpp\
		Weapon.cpp

INCLUDES := HumanA.hpp\
			HumanB.hpp\
			Weapon.hpp

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