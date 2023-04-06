# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/25 22:43:04 by amiguez           #+#    #+#              #
#    Updated: 2023/04/06 18:00:15 by amiguez          ###   ########.fr        #
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

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp $(INCLUDES) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean re