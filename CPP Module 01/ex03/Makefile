Name = weapon

CC = c++
CPPCPPFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJ = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(SRC) $(OBJ)
	$(CC) $(OBJ) -o $(Name)

# This rule states that each object file depends on the corresponding .cpp and .hpp files.
%.o: %.cpp %.hpp
	$(CC) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -fr $(Name)
re : fclean all

