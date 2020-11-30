# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ijose <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/11 18:55:30 by ijose             #+#    #+#              #
#    Updated: 2020/08/12 23:13:16 by ijose            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NANE = bsq

SRCS = ./srcs/*.c
OBJ = *.o

all:
	gcc -Wall -Wextra -Werror ./srcs/*.c -o bsq

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
