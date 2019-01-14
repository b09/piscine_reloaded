# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bprado <marvin@codam.nl>                     +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/11 13:17:40 by bprado        #+#    #+#                  #
#    Updated: 2019/01/13 20:17:48 by bprado        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror 
TARGET = ft_display_file
SRC = srcs/*
OBJ = *.o

all: 
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)
clean:
	rm -f *.o
fclean: clean
	rm -f $(TARGET)
re: fclean all
