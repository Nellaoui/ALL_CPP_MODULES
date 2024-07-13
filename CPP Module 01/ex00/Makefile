# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nelallao <nelallao@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 21:22:06 by nelallao          #+#    #+#              #
#    Updated: 2023/12/11 19:05:50 by nelallao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = zombie

CC = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(SRC) $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(Name)

# This rule states that each object file depends on the corresponding .cpp and .hpp files.
%.o: %.cpp %.hpp
	$(CC) $(CPPFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -fr $(Name)
re : fclean all

