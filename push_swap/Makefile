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
	@echo "\033[33m----Compiling printf----"
	@make -s -C ft_printf
	@echo "\033[33m----Compiling lib----"
	@make -s -C Libft
	$(CC) $(CFLAGS) $(OBJ) $(INCLUDE) ft_printf/$(PRINTF) Libft/$(LIBFT) -o $(NAME)
	@echo "\033[32mMinitalk Client Compiled! ᕦ(\033[31m♥\033[32m_\033[31m♥\033[32m)ᕤ\n"

clean:
	@make clean -s -C ft_printf
	@make clean -s -C Libft
	$(RM)	$(OBJ)
	@echo "\n\033[31mDeleting (almost) EVERYTHING! ⌐(ಠ۾ಠ)¬\n"

fclean: clean
	@make clean -s -C ft_printf
	@make clean -s -C Libft
	$(RM)	$(NAME)
	$(RM)	ft_printf/$(PRINTF)
	$(RM)	Libft/$(LIBFT)
	@echo "\n\033[31mDeleting EVERYTHING! ⌐(ಠ۾ಠ)¬\n"

re:	fclean	all

party:
	@printf "\033c"
	@echo "\n\033[35m♪┏(・o･)┛♪"
	@sleep 1
	@printf "\033c"
	@echo "\033[1;33m♪┗(・o･)┓♪"
	@sleep 1
	@printf "\033c"
	@echo "\n\033[36m♪┏(・o･)┛♪"
	@sleep 1
	@printf "\033c"
	@echo "\033[34m♪┗(・o･)┓♪\n"

.PHONY: all clean fclean re
