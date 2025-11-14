# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alel-you <alel-you@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/12 11:42:19 by alel-you          #+#    #+#              #
#    Updated: 2025/11/13 14:30:44 by alel-you         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILES = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS = $(FILES:.cpp=.o)

CC = g++

NAME = Weapon

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	$(CC) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
