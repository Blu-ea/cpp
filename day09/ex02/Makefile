# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 11:11:58 by amiguez           #+#    #+#              #
#    Updated: 2023/04/06 17:57:51 by amiguez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := PmergeMe

SRCS :=	main.cpp\
		PmergeMe.cpp

INCLUDES :=	PmergeMe.hpp

OBJS := $(SRCS:.cpp=.o)

CC := c++
CFLAGS := -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g3

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