# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ael-kouc <ael-kouc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 18:42:37 by ael-kouc          #+#    #+#              #
#    Updated: 2021/11/29 21:47:58 by ael-kouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libftprintf.a
CC = cc
SRC = ft_putstr.c\
	  ft_putchar.c\
	  ft_putnbr.c\
	  ft_printf.c\
	  ft_printhexa.c

OBJS = ${SRC:.c=.o}
FLAGS = -Wall -Wextra -Werror
ARG = -c

all : $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)
	
$(OBJS):
	$(CC) $(FLAGS) $(SRC) $(ARG)

clean : 
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all
