# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/03 16:19:03 by meghribe          #+#    #+#              #
#    Updated: 2025/12/04 18:56:39 by meghribe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX := c++
NAME := claptrap
SRCS := ClapTrap.cpp main.cpp
OBJS := $(SRCS:%=%.o)
INCS := ClapTrap.hpp
#DEBUG := -g3 -fsanitize=address
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 $(DEBUG)

.PHONY: all
all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

%.cpp.o: %.cpp Makefile $(INCS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJS)

.PHONY: fclean
fclean: clean
	rm -rf $(NAME)

.PHONY: re
re: fclean all
