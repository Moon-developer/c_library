# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafernan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/09 11:01:21 by mafernan          #+#    #+#              #
#    Updated: 2017/09/29 14:20:02 by mafernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror -g3
SRC = *.c
OBJ = *.o

all: obj
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)

obj:
		@gcc -c $(SRC) libft.h $(FLAG)

clean:
		@rm -f $(OBJ)
		
fclean: clean
		@rm -f $(NAME)

re: fclean all



