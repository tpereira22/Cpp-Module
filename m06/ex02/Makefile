# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 15:09:13 by timartin          #+#    #+#              #
#    Updated: 2023/10/06 15:09:15 by timartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= idRealType

SRCS		= main.cpp Base.cpp

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
