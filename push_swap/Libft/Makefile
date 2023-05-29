# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daguiar- <daguiar-@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 13:53:30 by daguiar-          #+#    #+#              #
#    Updated: 2022/11/21 16:36:16 by daguiar-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
SRC =	ft_atoi \
		ft_lstadd_back \
		ft_lstnew \
		ft_lstsize \
		ft_lstlast


CC =gcc
RM =rm -f
CFLAGS = -Wall -Werror -Wextra -g -I.

all:$(NAME)

$(NAME): $(SRC:=.o)
			ar rc $(NAME) $(SRC:=.o)
clean:
	$(RM)	$(SRC:=.o) $(BONUS:=.o)
fclean: clean
		$(RM)	$(NAME)
re:	fclean	$(NAME)

.PHONY: all clean fclean re