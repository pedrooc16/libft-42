# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pecosta- <pecosta-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 11:44:17 by pecosta-          #+#    #+#              #
#    Updated: 2022/11/17 11:44:17 by pecosta-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#This is a Makefile

NAME = libft.a

SRC =  ft_atoi.c\
		ft_isalpha.c\
		ft_isdigit.c\
		ft_isalnum.c\
		ft_isascii.c\
		ft_isprint.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_strncmp.c\
		ft_bzero.c\
		ft_memset.c\
		ft_strlen.c\
		ft_strlcpy.c\
		ft_memcpy.c\
		ft_memmove.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_calloc.c\
		ft_strdup.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strlcat.c\
		ft_substr.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_itoa.c\
		ft_strmapi.c\
		ft_striteri.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_split.c

CC = 		cc
Flags = 	-Wall -Wextra -Werror
LIB = 		ar -rcs


OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(LIB) $(NAME) $(OBJS)

.c.o: 		
	$(CC) $(Flags) -c $< -o $(<:.c=.o)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re .c.o
