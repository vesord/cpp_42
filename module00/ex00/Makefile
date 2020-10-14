# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matrus <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/13 08:19:36 by matrus            #+#    #+#              #
#    Updated: 2020/10/13 08:26:24 by matrus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	megaphone

SRCS =	megaphone.cpp
OBJS =	$(SRCS:.cpp=.o)

CC =	clang++
FLAGS =	-Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $(NAME)

$(OBJS): %.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJS)

.PHONY: fclean
fclean: clean
	rm -rf $(NAME)

.PHONY: re
re: fclean all

