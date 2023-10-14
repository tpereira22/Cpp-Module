# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 16:38:17 by timartin          #+#    #+#              #
#    Updated: 2023/10/14 16:38:19 by timartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= template

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
