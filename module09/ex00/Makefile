# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzomeno- <mzomeno-@42madrid.student.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 19:44:20 by mzomeno-          #+#    #+#              #
#    Updated: 2023/04/17 17:13:41 by mzomeno-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = clang++
FLAGS = -Wall -Wextra -Werror -g -std=c++98

NAME = btc

SRCS = main.cpp BitcoinExchange.cpp
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
