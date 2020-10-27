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

.PHONY: test
test:
	./$(NAME) 0
	./$(NAME) 42.0f
	./$(NAME) 42.
	./$(NAME) nan
	./$(NAME) nanf
	./$(NAME) inf
	./$(NAME) -inf
	./$(NAME) +inf
	./$(NAME) inff
	./$(NAME) -inff
	./$(NAME) +inff
	./$(NAME) a
	./$(NAME) " "
	./$(NAME) 42
	./$(NAME) 6
	./$(NAME) 126
	./$(NAME) 127
	./$(NAME) 127.8765
	./$(NAME) 128
	./$(NAME) -128
	./$(NAME) -128.7654
	./$(NAME) -129
	./$(NAME) 2147483647
	./$(NAME) 2147483647.7654
	./$(NAME) 2147483648
	./$(NAME) -2147483648
	./$(NAME) -2147483648.7654
	./$(NAME) -2147483649
	./$(NAME) 42e+30
	./$(NAME) 42e+50
	./$(NAME) 42e-30
	./$(NAME) 42e-50
	./$(NAME) 42e+300
	./$(NAME) 42e+500
	./$(NAME) 42e-300
	./$(NAME) 42e-500
	./$(NAME) aa
	./$(NAME) test
	./$(NAME) "  "
