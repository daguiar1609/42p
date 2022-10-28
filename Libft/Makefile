# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 13:53:30 by daguiar-          #+#    #+#              #
#    Updated: 2022/10/28 18:46:35 by daguiar-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			=	ft_isalnum.c ft_isprint.c ft_calloc.c ft_memcpy.c \
					ft_strncmp.c ft_atoi.c ft_isalpha.c ft_strlcat.c \
					ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c  ft_isascii.c \
					ft_strlen.c  ft_strrchr.c ft_memcmp.c \
					ft_toupper.c ft_isdigit.c ft_memset.c ft_memmove.c
					
OBJS			= $(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

bonus:			$(OBJS) $(BONUS_OBJS)
				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:			all clean fclean re bonus
