# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzomeno- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/12 13:47:18 by mzomeno-          #+#    #+#              #
#    Updated: 2021/08/12 15:03:20 by mzomeno-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = megaphone

SRCS = megaphone.cpp
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


test: $(NAME)
	./megaphone "shhhhh... I think the students are asleep..."
	@echo ""
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	@echo ""
	./megaphone


.PHONY: all clean fclean re test
