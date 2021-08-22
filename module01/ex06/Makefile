# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zome </var/spool/mail/zome>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/22 19:09:34 by zome              #+#    #+#              #
#    Updated: 2021/08/22 19:12:40 by zome             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OMPILER = clang++
FLAGS = -Wall -Wextra -Werror -I. -std=c++98 -g

NAME = karenFilter

SRCS = main.cpp Karen.cpp
OBJS = $(SRCS:.cpp=.o)


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
	        @./$(NAME)

.PHONY: all clean fclean re test
