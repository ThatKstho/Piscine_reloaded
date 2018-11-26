# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ohachim <othmanehachim@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/05 17:38:28 by ohachim           #+#    #+#              #
#    Updated: 2018/10/05 23:29:39 by ohachim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CNAME = ft_display_file.c
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC = $(wildcard *.c)
HDR = $(wildcard *.h)

all: $(NAME) clean
compo:	
	$(CC) -c $(SRC) $(HDR)
$(NAME) : compo 
	$(CC) *.o -o $(NAME)
clean:
	rm -rf *.gch *.o
fclean: clean
	rm -rf $(NAME)
re: fclean all
