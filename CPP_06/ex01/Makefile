# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscala <gscala@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 16:53:28 by gscala            #+#    #+#              #
#    Updated: 2021/10/12 16:53:33 by gscala           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = serialize

COMPILER = clang++
WFLAG = -Wall -Werror -Wextra

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