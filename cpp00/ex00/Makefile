# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-hadd <sel-hadd@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/15 18:14:37 by sel-hadd          #+#    #+#              #
#    Updated: 2025/04/15 18:14:37 by sel-hadd         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
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
