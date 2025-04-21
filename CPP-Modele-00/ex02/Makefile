# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mefranci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/11 08:16:45 by mefranci          #+#    #+#              #
#    Updated: 2025/04/11 08:16:46 by mefranci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = globalbanksters
SRC = Account.cpp \
		tests.cpp
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
	@echo "$(CYAN)Limpando $(OBJ)...(RESET)"
	@rm -f $(OBJ)

fclean: clean
	@echo "$(CYAN)Limpando $(NAME)...(RESET)"
	@rm -f $(NAME)

re: fclean all

