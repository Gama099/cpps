CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ = main.o

TARGET = program

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o

$(OBJ): $(SRC)
	$(CC) $(FLAGS) $(SRC) -o 

clean:
	rm -rf $(OBJ)

fclean:
	rm -rf $(OBJ) $(TARGET)
