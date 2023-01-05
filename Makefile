# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gfilipe- <gfilipe-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/07 14:49:07 by gfilipe-          #+#    #+#              #
#    Updated: 2023/01/05 11:57:45 by gfilipe-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC := $(wildcard *.c)
OBJS := $(SRC:.c=.o)

CC = cc
RM = ar -f
AR = ar rcs
FLAGS = -Wall -Wextra -Werror

all: ${NAME}

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}
	
$(NAME):  ${OBJS}
	${AR} ${NAME} ${OBJS}

clean:
	${RM} $(OBJS) $(BONUS)

fclean: clean
		${RM} ${NAME}

re: fclean all
.PHONY: all clean fclean re bonus