# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: guillemetteduchateau <guillemetteduchat    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/04 12:34:39 by guillemette       #+#    #+#              #
#    Updated: 2022/07/25 18:58:48 by guillemette      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp

OBJS		= ${SRCS:.cpp=.o}

NAME		= scavTrap

CC			= c++

CFLAGS		= -Wall -Wextra -Werror -std=c++98

RM			= rm -f

${NAME}:		 ${OBJS} ${INCS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all:			${NAME}

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	${RM} ${OBJS}

fclean:			clean
	${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re
