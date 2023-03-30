# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 11:11:58 by amiguez           #+#    #+#              #
#    Updated: 2023/03/30 20:51:36 by amiguez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := RPN

SRCS :=	main.cpp\
		RNP.cpp

INCLUDES :=	RNP.hpp

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