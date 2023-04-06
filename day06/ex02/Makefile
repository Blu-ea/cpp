# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amiguez <amiguez@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 11:11:58 by amiguez           #+#    #+#              #
#    Updated: 2023/04/06 17:58:26 by amiguez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := identify

SRCS := main.cpp\
		Base.cpp

INCLUDES := Base.hpp

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