# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkiticha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/03 13:28:44 by nkiticha          #+#    #+#              #
#    Updated: 2023/11/06 15:29:51 by nkiticha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf_char.c
OBJ = ${SRC:.c=.o}

all:	$(NAME)

$(NAME):$(OBJ)
	ar -rcs $(NAME) $(OBJ)

%.o:	%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re:	fclean all

.PHONY: re clean fclean all
