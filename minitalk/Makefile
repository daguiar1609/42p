NAMEC = client
NAMES = server

PRINTF = libftprintf.a
LIBFT = libft.a

SRCC_FILES = client.c
SRCS_FILES = server.c

SRC_DIR = src/

SRCC = $(addprefix $(SRC_DIR), $(SRCC_FILES))
SRCS = $(addprefix $(SRC_DIR), $(SRCS_FILES))

OBJC = $(SRCC:.c=.o)
OBJS = $(SRCS:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
INCLUDE = -I include

all:$(NAMEC) $(NAMES)

$(NAMEC): $(OBJC)
			@make -C ft_printf
			@make -C Libft
			$(CC) $(CFLAGS) $(OBJC) $(INCLUDE) ft_printf/$(PRINTF) Libft/$(LIBFT) -o $(NAMEC)

$(NAMES): $(OBJS)
			@make -C ft_printf
			@make -C Libft
			$(CC) $(CFLAGS) $(OBJS) $(INCLUDE) ft_printf/$(PRINTF) Libft/$(LIBFT) -o $(NAMES)

clean:
	@make clean -C ft_printf
	@make clean -C Libft
	$(RM)	$(OBJC)
	$(RM)	$(OBJS)

fclean: clean
	@make clean -C ft_printf
	@make clean -C Libft
	$(RM)	$(NAMEC)
	$(RM)	$(NAMES)
	$(RM)	ft_printf/$(PRINTF)
	$(RM)	Libft/$(LIBFT)

re:	fclean	all

.PHONY: all clean fclean re
