# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/26 17:16:13 by timartin          #+#    #+#              #
#    Updated: 2023/07/26 17:16:14 by timartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= fragTrap

SRCS		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJS		= $(SRCS:.cpp=.o)

RM		= rm -f

CC		= c++ -Wall -Wextra -Werror -g -fsanitize=address -std=c++98

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
