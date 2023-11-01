# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/01 17:33:36 by timartin          #+#    #+#              #
#    Updated: 2023/11/01 17:33:37 by timartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= MutantStack

SRCS		= main.cpp

OBJS		= $(SRCS:.cpp=.o)

RM		= rm -f

CXX		= c++ -Wall -Wextra -Werror -g -fsanitize=address -std=c++98

.c.o:
			@$(CXX) -c $< -o $@

all:		$(NAME)

$(NAME): 	$(OBJS)
			$(CXX) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean re fclean
