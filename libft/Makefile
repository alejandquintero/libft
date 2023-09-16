# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aquinter <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 19:59:11 by aquinter          #+#    #+#              #
#    Updated: 2023/09/15 23:04:57 by aquinter         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

RM = rm -f

CC = gcc

CFLAGS = -Wextra -Wall -Werror

SRC = ${wildcard *.c}

OBJ = ${SRC:%.c=%.o}

AR = ar -cr

all: ${NAME}

${NAME} : ${OBJ}
	${AR} ${NAME} ${OBJ}

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.SILENT: all ${NAME} ${OBJ} clean fclean
.PHONY: all clean fclean re
