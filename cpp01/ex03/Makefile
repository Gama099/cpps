# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/17 22:29:42 by sel-hadd          #+#    #+#              #
#    Updated: 2025/04/17 22:30:44 by sel-hadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = HumanA.cpp  HumanB.cpp  Weapon.cpp  main.cpp
OBJ = $(SRC:.cpp=.o)

TARGET = Weapon

# Default target
all: $(TARGET)

# Linking the object files to create the final executable
$(TARGET): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(TARGET)

# Compile the source files into object files
%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -rf $(OBJ)

# Clean up both object files and the executable
fclean: clean
	rm -rf $(TARGET)

# Rebuild everything (clean + fclean)
re: fclean all
