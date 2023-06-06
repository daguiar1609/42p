NAME = push_swap

PRINTF = libftprintf.a
LIBFT = libft.a

SRC_FILES = src/errors_handler.c	\
			src/index.c 			\
			src/utils.c 			\
			src/push.c				\
			src/rev_rotate.c		\
			src/rotate.c			\
			src/simple.c			\
			src/swap.c				\
			src/sort3_utils.c		\
			src/radix.c				\
			src/main.c

OBJ = $(SRC_FILES:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -g -fsanitize=address
INCLUDE = -I include

all:$(NAME)

$(NAME): $(OBJ)
			@make -C ft_printf
			@make -C Libft
			$(CC) $(CFLAGS) $(OBJ) $(INCLUDE) ft_printf/$(PRINTF) Libft/$(LIBFT) -o $(NAME)

clean:
	@make clean -C ft_printf
	@make clean -C Libft
	$(RM)	$(OBJ)

fclean: clean
	@make clean -C ft_printf
	@make clean -C Libft
	$(RM)	$(NAME)
	$(RM)	ft_printf/$(PRINTF)
	$(RM)	Libft/$(LIBFT)

re:	fclean	all

.PHONY: all clean fclean re
