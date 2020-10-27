# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matrus <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/26 02:50:01 by matrus            #+#    #+#              #
#    Updated: 2020/10/27 23:23:55 by matrus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

SRCS = main.cpp

OBJ = $(SRCS:.cpp=.o)

CC = clang++
FLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(NAME)
	@echo Serialize is ready.

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
	
