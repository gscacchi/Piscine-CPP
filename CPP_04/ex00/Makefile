# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscala <gscala@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/14 16:53:04 by gscala            #+#    #+#              #
#    Updated: 2021/09/15 12:11:34 by gscala           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = POLYMORPHISM

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