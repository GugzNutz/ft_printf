# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfilipe- <gfilipe-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 14:49:07 by gfilipe-          #+#    #+#              #
#    Updated: 2022/12/07 15:08:05 by gfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC := $(wildcard *.c)
OBJS := $(SRC:.c=.o)

CC = gcc
RM = ar -f
AR = ar rcs

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean ${NAME}

.PHONY: all clean fclean re