NAME = zombie
SRC = main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
CCFLAGS = -Wall -Werror -Wextra

CYAN = \033[1;36m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ) 
	@echo "$(CYAN)Compilando $(NAME)...$(RESET)"
	@$(CC) $(CCFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@echo "$(CYAN)Compilando $<...$(RESET)"
	@$(CC) $(CCFLAGS) -c $< -o $@

clean:
	@echo "$(CYAN)Limpando $(OBJ)...(RESET)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(CYAN)Limpando $(NAME)...(RESET)"
	@rm -f $(NAME)

re: fclean all