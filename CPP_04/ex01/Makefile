# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscala <gscala@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/20 15:33:58 by gscala            #+#    #+#              #
#    Updated: 2021/09/20 15:34:04 by gscala           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = BRAIN

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