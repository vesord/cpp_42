# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matrus <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/26 02:50:01 by matrus            #+#    #+#              #
#    Updated: 2020/10/26 02:59:07 by matrus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

SRCS = Caster.cpp main.cpp
INCLUDES = Caster.hpp

OBJ = $(SRCS:.cpp=.o)

CC = clang++
FLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)
	@echo Convert is ready.

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $^ -o $(NAME)

$(OBJ): %.o: %.cpp $(INCLUDES)
	$(CC) $(FLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJ)

.PHONY: fclean
fclean: clean
	rm -rf $(NAME)

.PHONY: re
re:	fclean all
	
