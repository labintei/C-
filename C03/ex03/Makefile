# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: labintei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 15:22:59 by labintei          #+#    #+#              #
#    Updated: 2021/11/02 17:45:59 by labintei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS 	= $(SRCS:.cpp=.o)

CC		= clang++

RM		= rm -fr

NAME	= Now_it_s_weird

CFLAGS	= -Wall -Werror -Wextra -Wshadow #-Wno-shadow

all:		${NAME}

.cpp.o:		${CC} ${CFLAGS} -cpp $< -o ${:.cpp=.o}

${NAME}:	${OBJS}
					${CC} -o $(NAME) $(SRCS)

clean:
					$(RM) ${OBJS}

fclean:				clean
						$(RM) ${NAME}

re:					fclean all

.PHONY:				all clean fclean re
