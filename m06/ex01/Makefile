# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/06 15:07:25 by timartin          #+#    #+#              #
#    Updated: 2023/10/06 15:07:27 by timartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= serialization

SRCS		= main.cpp Serializer.cpp

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
