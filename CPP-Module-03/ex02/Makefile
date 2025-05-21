# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mefranci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/21 11:52:05 by mefranci          #+#    #+#              #
#    Updated: 2025/05/21 11:52:07 by mefranci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = repetitive_work
SRC = main.cpp			\
		ClapTrap.cpp	\
		ScavTrap.cpp	\
		FragTrap.cpp
OBJ = $(SRC:.cpp=.o)
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "Compilando $(NAME)..."
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	@echo "Compilando $<..."
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	@echo "limpando $(OBJ)..."
	@rm -f $(OBJ)

fclean : clean
	@echo "limpando $(NAME)..."
	@rm -f $(NAME)

re : fclean all

.PHONY : re all fclean clean
