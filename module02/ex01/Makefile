# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzomeno- <1veleita1@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 10:39:59 by mzomeno-          #+#    #+#              #
#    Updated: 2021/08/24 12:23:31 by mzomeno-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = clang++
FLAGS = -Wall -Wextra -Werror -I. -std=c++98 -g

NAME = AdvancedFixedTest

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


.PHONY: all clean fclean re test
