NAME			= megaphone

SRC				= megaphone.cpp
OBJ				= $(SRC:.cpp=.o)

CXX				= clang++
CXXFLAGS		= -Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJ)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

clean:
				rm -f $(OBJ)

fclean:			clean
				rm -f $(NAME)

re:				fclean $(NAME)
