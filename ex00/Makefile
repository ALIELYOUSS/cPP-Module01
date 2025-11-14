FILES = main.cpp newZombie.cpp randomChump.cpp  zombie.cpp 

OBJS = $(FILES:.cpp=.o)

CC = c++

NAME = zombie

CPP_FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

%.o: %.cpp Zombie.hpp
	$(CC) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
