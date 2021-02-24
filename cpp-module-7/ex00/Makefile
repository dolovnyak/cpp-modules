NAME = whatever

CXX	= clang++
CXXFLAGS = -Wall -Werror -Wextra

SRC = whatever.cpp

OBJ = $(SRC:.cpp=.o)

INCLUDES =

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

/%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
