# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imatek <imatek@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/24 09:41:30 by imatek            #+#    #+#              #
#    Updated: 2024/05/24 11:05:25 by imatek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
FILES= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
		ft_strrchr.c ft_tolower.c ft_toupper.c ft_strjoin.c \
		ft_strtrim.c ft_substr.c
		
CC= cc
FLAGS= -Wall -Wextra -Werror
INCLUDE= libft.h
OBJS= $(FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -I $(INCLUDE) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re