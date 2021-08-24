# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzomeno <1veleita1@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 09:24:56 by mzomeno-          #+#    #+#              #
#    Updated: 2021/08/24 09:30:09 by zome             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = clang++
FLAGS = -Wall -Wextra -Werror -I. -std=c++98 -g

NAME = FixedTest

SRCS = main.cpp
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
