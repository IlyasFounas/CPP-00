NAME = phonebook

INCLUDES = includes
SRC = srcs/class/PhoneBook.cpp \
	  srcs/class/Contact.cpp \
	  srcs/ContactSearch.cpp \
	  srcs/main.cpp

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INCLUDES)

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re

