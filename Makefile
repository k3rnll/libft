# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmarkita <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/17 15:42:34 by tmarkita          #+#    #+#              #
#    Updated: 2019/09/14 18:48:25 by tmarkita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -c -Wall -Wextra -Werror
HPATH = ./includes/
SPATH = ./srcs/
OBJ = *.o

all: libft.a

libft.a: 
	gcc $(FLAGS) *.c
	ar rcs libft.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) libft.a

re:
	make fclean all
