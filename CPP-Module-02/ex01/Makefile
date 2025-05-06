NAME = fixed
SRC = main.cpp \
		Fixed.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

CYAN = \033[1;36m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ) 
	@echo "$(CYAN)Compilando $(NAME)...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@echo "$(CYAN)Compilando $<...$(RESET)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@echo "$(CYAN)Limpando $(OBJ)...$(RESET)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(CYAN)Limpando $(NAME)...$(RESET)"
	@rm -f $(NAME)

re: fclean all