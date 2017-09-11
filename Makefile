# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafernan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/09 11:01:21 by mafernan          #+#    #+#              #
#    Updated: 2017/08/17 11:26:24 by mafernan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FLAG = -Wall -Wextra -Werror -g3
SRC = *.c
OBJ = *.o

all: obj
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo "Object files created"

obj:
		@gcc -c $(SRC) libft.h $(FLAG)
		@echo "Libft Compiled"

clean:
		@rm -f $(OBJ)
		@echo "Object files cleaned"
		
fclean: clean
		@rm -f $(NAME)
		@echo "$(NAME) cleaned"

re: fclean all



