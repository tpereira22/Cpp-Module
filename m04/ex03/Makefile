# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timartin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 15:04:17 by timartin          #+#    #+#              #
#    Updated: 2023/08/29 15:04:18 by timartin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= materia

SRCS		= main.cpp Character.cpp MateriaSource.cpp AMateria.cpp Ice.cpp Cure.cpp
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
