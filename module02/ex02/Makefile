# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 12:36:27 by mzomeno-          #+#    #+#              #
#    Updated: 2021/08/24 12:36:46 by mzomeno-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = clang++
FLAGS = -Wall -Wextra -Werror -I. -std=c++98 -g

NAME = SuperAdvancedFixedTest

SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)


%.o: %.cpp
	                $(COMPILER) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	                ${COMPILER} ${FLAGS} $(OBJS) -o $(NAME)


clean:
	                rm -f $(OBJS)

fclean: clean
	                rm -f $(NAME)

re: fclean all


test: re
	                ./$(NAME)


