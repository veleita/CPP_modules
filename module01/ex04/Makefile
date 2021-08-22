# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/20 17:34:29 by mzomeno-          #+#    #+#              #
#    Updated: 2021/08/22 15:05:37 by mzomeno-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = clang++
FLAGS = -Wall -Wextra -Werror -I. -std=c++98 -g

NAME = replace

SRCS = main.cpp Replace.cpp
OBJS = $(SRCS:.cpp=.o)


TEST_FILE 	= StraightOuttaCompton

TEST_SEARCH		= "fuck"
TEST_REPLACE	= "BEEEEP"


all: $(NAME)


%.o: %.cpp
	$(COMPILER) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	${COMPILER} ${FLAGS} $(OBJS) -o $(NAME)


clean:
	@rm -f $(OBJS) *.replace

fclean: clean
	@rm -f $(NAME)


re: fclean all


test: re
	@./$(NAME) $(TEST_FILE) $(TEST_SEARCH) $(TEST_REPLACE) && \
	echo "Original:" && \
	cat $(TEST_FILE) && \
	echo "" && \
	echo "Replaced:" && \
	cat $(TEST_FILE).replace

.PHONY: all clean fclean re test
