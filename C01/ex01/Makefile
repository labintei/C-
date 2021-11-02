# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: labintei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 15:22:59 by labintei          #+#    #+#              #
#    Updated: 2021/10/30 20:52:04 by labintei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= main.cpp Zombie.cpp ZombieHorde.cpp

OBJS 	= $(SRCS:.cpp=.o)

CC		= clang++

RM		= rm -fr

NAME	= Moar_Brainz

CFLAGS	= -Wall -Werror -Wextra

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
