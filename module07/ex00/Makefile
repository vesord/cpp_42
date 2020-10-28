# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matrus <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 01:49:48 by matrus            #+#    #+#              #
#    Updated: 2020/10/29 01:49:50 by matrus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever

SRCS = whatever.cpp

OBJ = $(SRCS:.cpp=.o)

CC = clang++
FLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)
	@echo whatever is ready.

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
