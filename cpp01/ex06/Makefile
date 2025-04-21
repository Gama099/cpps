# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/17 23:45:18 by sel-hadd          #+#    #+#              #
#    Updated: 2025/04/21 18:20:49 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Files
SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)
NAME = Harl

# Default target
all: $(NAME)

# Link the object files into the final executable
$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# Compile the .cpp files into .o object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# Clean the project
clean:
	rm -f $(OBJ)

# Remove the executable
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all
