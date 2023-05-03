NAMEC = client
NAMES = server

PRINTF = libftprintf.a

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
			$(CC) $(CFLAGS) $(OBJC) $(INCLUDE) ft_printf/$(PRINTF) -o $(NAMEC)

$(NAMES): $(OBJS)
			@make -C ft_printf
			$(CC) $(CFLAGS) $(OBJS) $(INCLUDE) ft_printf/$(PRINTF) -o $(NAMES)

clean:
	@make clean -C ft_printf
	$(RM)	$(OBJC)
	$(RM)	$(OBJS)

fclean: clean
	@make clean -C ft_printf
	$(RM)	$(NAMEC)
	$(RM)	$(NAMES)
	$(RM)	$(PRINTF)

re:	fclean	all

.PHONY: all clean fclean re
