# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscala <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/04 14:59:00 by gscala            #+#    #+#              #
#    Updated: 2021/09/04 14:59:02 by gscala           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = KAREN-filter

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
