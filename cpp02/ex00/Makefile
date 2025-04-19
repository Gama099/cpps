CXX = c++
CXXFLAGS = -Wall -Wextra -std=c++98

# Files
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)
NAME = Fixed

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
