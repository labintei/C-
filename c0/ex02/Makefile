# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: labintei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 15:22:59 by labintei          #+#    #+#              #
#    Updated: 2021/10/13 10:40:40 by labintei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= Account.cpp tests.cpp

OBJS 	= $(SRCS:.cpp=.o)

CC		= clang++

RM		= rm -fr

NAME	= Account

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
