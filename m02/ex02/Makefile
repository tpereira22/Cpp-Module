# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/19 12:05:49 by timartin          #+#    #+#              #
#    Updated: 2023/07/19 12:05:52 by timartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fixed3

SRCS		= main.cpp Fixed.cpp

OBJS		= $(SRCS:.cpp=.o)

RM		= rm -f

CC		= clang++ -Wall -Wextra -Werror -g -fsanitize=address -std=c++98

.c.o:
			@$(CC) -c $< -o $@

all:		$(NAME)

$(NAME): 	$(OBJS)
			$(CC) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean re fclean
