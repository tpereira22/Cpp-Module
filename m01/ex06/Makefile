# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/11 19:43:23 by timartin          #+#    #+#              #
#    Updated: 2023/07/11 19:43:24 by timartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= harlFilter

SRCS		= main.cpp Harl.cpp

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
