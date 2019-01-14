# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: bprado <marvin@codam.nl>                     +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/10 18:27:56 by bprado        #+#    #+#                  #
#    Updated: 2019/01/10 20:09:34 by bprado        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
TARGET = libft.a
SRC = srcs/*
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER = includes/

all: library

library:
	$(CC) $(CFLAGS) -I$(HEADER) -c $(SRC)  
	ar rc $(TARGET) $(OBJ)
	ranlib $(TARGET)

clean:
	rm -f libft.a
fclean: clean
	rm -f *.o
re: fclean all 

