# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmarkita <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/17 15:42:34 by tmarkita          #+#    #+#              #
#    Updated: 2019/09/14 19:11:06 by tmarkita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -c -Wall -Wextra -Werror
HPATH = ./includes/
SPATH = ./srcs/
OBJ = *.o
NAME = libft.a

all: $(NAME)

$(NAME): 
	gcc $(FLAGS) *.c
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re:
	make fclean all
