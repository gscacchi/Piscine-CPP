# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscala <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/31 11:42:11 by gscala            #+#    #+#              #
#    Updated: 2021/08/31 11:42:12 by gscala           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HI_THIS_IS_BRAIN

COMPILER = clang++
WFLAG = -Wall -Werror -Wextra

SRC =	main.cpp

OBJ = $(SRC:.cpp=.o)

all:
	$(COMPILER) $(WFLAG) -c $(SRC)
	$(COMPILER) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
