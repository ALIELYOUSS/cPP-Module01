# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/14 11:09:56 by alel-you          #+#    #+#              #
#    Updated: 2025/11/14 11:40:16 by alel-you         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = main.cpp Harl.cpp

OBJS = $(FILES:.cpp=.o)

CC = c++

NAME = Harl

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o: %.cpp Harl.hpp
	$(CC) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
