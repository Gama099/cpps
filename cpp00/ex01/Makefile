CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = program

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(TARGET)

$(OBJ): $(SRC)
	$(CC) $(FLAGS) -c $(SRC) -o $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ) $(TARGET)
