# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscala <gscala@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/09 15:49:45 by gscala            #+#    #+#              #
#    Updated: 2021/09/13 15:50:12 by gscala           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DIAMONDTRAP

COMPILER = clang++
WFLAG = -Wall -Werror -Wextra -g

SRC =	*.cpp

OBJ = $(SRC:.cpp=.o)

all:
	$(COMPILER) $(WFLAG) -c $(SRC)
	$(COMPILER) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
