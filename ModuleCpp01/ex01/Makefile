NAME = zombie_horde
SRC = main.cpp \
		Zombie.cpp \
		zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra

CYAN = \033[1;36m
RESET = \033[0m

all: $(NAME)

$(NAME) : $(OBJ)
	@echo "$(CYAN)Compilando $(NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	@echo "$(CYAN)Compilando $<...$(RESET)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(CYAN)Limpando os objectos$(RESET)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(CYAN)Limpando o executável$(RESET)"
	@rm -f $(NAME)

re: fclean all