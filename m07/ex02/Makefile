# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 16:39:31 by timartin          #+#    #+#              #
#    Updated: 2023/10/14 16:39:33 by timartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= template3

SRCS		= main.cpp 

OBJS		= $(SRCS:.cpp=.o)

RM		= rm -f

CXX		= clang++ -Wall -Wextra -Werror -g -fsanitize=address -std=c++98

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
