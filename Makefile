# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsekiguc <tsekiguc@student.42tokyo.jp      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/20 09:45:12 by tsekiguc          #+#    #+#              #
#    Updated: 2022/06/14 17:47:06 by tsekiguc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft_01_tester
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
SRCS	=	../ft_toupper.c \
			../ft_tolower.c \
			../ft_strchr.c \
			../ft_strrchr.c \
			../ft_strncmp.c \
			../ft_memchr.c \
			../ft_memcmp.c \
			../ft_strnstr.c \
			../ft_atoi.c
TSRCS	=	toupper_test.c \
			tolower_test.c \
			strchr_test.c \
			strrchr_test.c \
			strncmp_test.c \
			memchr_test.c \
			memcmp_test2.c \
			strnstr_test.c \
			atoi_test.c \
			my_test.c \
			put_result.c

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) $(TSRCS) -o $(NAME)

clean:
	rm $(NAME)
