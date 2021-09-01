# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gscala <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/01 10:07:49 by gscala            #+#    #+#              #
#    Updated: 2021/09/01 10:07:51 by gscala           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = UNNECESSARY_VIOLENCE

COMPILER = clang++
WFLAG = -Wall -Werror -Wextra

SRC =	main.cpp HumanA.cpp Weapon.cpp

OBJ = $(SRC:.cpp=.o)

all:
	$(COMPILER) $(WFLAG) -c $(SRC)
	$(COMPILER) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

