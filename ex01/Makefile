# Nom de l'exécutable
NAME = phonebook

# Dossiers
INCLUDES = includes
SRC = s_class/PhoneBook.cpp \
	  s_class/Contact.cpp \
	  main.cpp

# Nom du compilateur
CXX = c++

# Flags de compilation
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I$(INCLUDES)

# Règle par défaut
all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re

