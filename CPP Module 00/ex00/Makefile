Name = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)

all: $(Name)

$(Name): $(SRC) $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(Name)

# This rule states that each object file depends on the corresponding .cpp and .hpp files.
%.o: %.cpp %.hpp
	$(CC) $(FLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -fr $(Name)
re : fclean all

