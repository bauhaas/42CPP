# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bahaas <bahaas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/21 19:25:36 by bahaas            #+#    #+#              #
#    Updated: 2021/09/30 14:55:21 by bahaas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

SRCS = main.cpp span.cpp

CC = clang++

CFLAGS = -Wextra -Werror -Wall -pedantic -g3 -std=c++98

OBJS = ${SRCS:.cpp=.o}

%.o : %.cpp 
			${CC} -c ${CFLAGS} $< -o $@

all:		${NAME}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o ${NAME}
			
clean:		
			@rm -rf ${OBJS}

fclean:		clean
			@rm -rf ${NAME}

re:			fclean all

.PHONY: all clean fclean re

