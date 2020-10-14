# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matrus <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/14 07:33:21 by matrus            #+#    #+#              #
#    Updated: 2020/10/14 07:33:23 by matrus           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	awesome_supercool_phonebook

SRCS =	Contact.class.cpp Phonebook.class.cpp my_cool_phonebook.cpp
INCLUDES = Contact.class.hpp Phonebook.class.hpp

OBJS =	$(SRCS:.cpp=.o)

CC =	clang++
FLAGS =	-Wall -Wextra -Werror

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $(NAME)

$(OBJS): %.o: %.cpp
	$(CC) $(FLAGS) -MMD -c $< -o $@

-include $(OBJS:.o=.d)

.PHONY: clean
clean:
	rm -rf $(OBJS)
	rm -rf $(OBJS:.o=.d)

.PHONY: fclean
fclean: clean
	rm -rf $(NAME)

.PHONY: re
re: fclean all

