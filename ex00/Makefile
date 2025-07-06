# Nom de l'exécutable
NAME = megaphone

# Nom des fichiers source
SRC = megaphone.cpp

# Nom de l'éditeur de lien / compilateur
CXX = c++

# Flags de compilation
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Règle par défaut
all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
