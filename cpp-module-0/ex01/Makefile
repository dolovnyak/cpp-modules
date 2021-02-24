NAME = AwesomePhoneBook

CXX	= clang++
CXXFLAGS = -Wall -Werror -Wextra

SRC = AwesomePhoneBook.cpp \
	  Contact.cpp \
	  main.cpp

OBJ = $(SRC:.cpp=.o)

INCLUDES = AwesomePhoneBook.h Contact.h

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
