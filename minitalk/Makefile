NAMEC = client
NAMES = server

NAMECB = client_bonus
NAMESB = server_bonus

PRINTF = libftprintf.a
LIBFT = libft.a

SRCC_FILES = client.c
SRCS_FILES = server.c

SRCCB_FILES = client_bonus.c
SRCSB_FILES = server_bonus.c

SRC_DIR = src/

SRCC = $(addprefix $(SRC_DIR), $(SRCC_FILES))
SRCS = $(addprefix $(SRC_DIR), $(SRCS_FILES))

SRCCB = $(addprefix $(SRC_DIR), $(SRCCB_FILES))
SRCSB = $(addprefix $(SRC_DIR), $(SRCSB_FILES))

OBJC = $(SRCC:.c=.o)
OBJS = $(SRCS:.c=.o)

OBJCB = $(SRCCB:.c=.o)
OBJSB = $(SRCSB:.c=.o)

CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
INCLUDE = -I include

all:$(NAMEC) $(NAMES)

$(NAMEC): $(OBJC)
			@echo "\033[33m----Compiling printf----"
			@make -C ft_printf
			@echo "\033[33m----Compiling lib----"
			@make -C Libft
			@$(CC) $(CFLAGS) $(OBJC) $(INCLUDE) ft_printf/$(PRINTF) Libft/$(LIBFT) -o $(NAMEC)
			@echo "\033[32mMinitalk Client Compiled! ᕦ(\033[31m♥\033[32m_\033[31m♥\033[32m)ᕤ\n"

$(NAMES): $(OBJS)
			@echo "\033[33m----Compiling printf----"
			@make -C ft_printf
			@echo "\033[33m----Compiling lib----"
			@make -C Libft
			@$(CC) $(CFLAGS) $(OBJS) $(INCLUDE) ft_printf/$(PRINTF) Libft/$(LIBFT) -o $(NAMES)
			@echo "\033[32mMinitalk Server Compiled! ᕦ(\033[31m♥\033[32m_\033[31m♥\033[32m)ᕤ\n"

$(NAMECB): $(OBJCB)
			@echo "\033[33m----Compiling printf----"
			@make -C ft_printf
			@echo "\033[33m----Compiling lib----"
			@make -C Libft
			@$(CC) $(CFLAGS) $(OBJCB) $(INCLUDE) ft_printf/$(PRINTF) Libft/$(LIBFT) -o $(NAMECB)
			@echo "\033[32mMinitalk Client Bonus Compiled! ᕦ(\033[31m♥\033[32m_\033[31m♥\033[32m)ᕤ\n"

$(NAMESB): $(OBJSB)
			@echo "\033[33m----Compiling printf----"
			@make -C ft_printf
			@echo "\033[33m----Compiling lib----"
			@make -C Libft
			@$(CC) $(CFLAGS) $(OBJSB) $(INCLUDE) ft_printf/$(PRINTF) Libft/$(LIBFT) -o $(NAMESB)
			@echo "\033[32mMinitalk Server Bonus Compiled! ᕦ(\033[31m♥\033[32m_\033[31m♥\033[32m)ᕤ\n"

clean:
	@make clean -C ft_printf
	@make clean -C Libft
	@$(RM)	$(OBJC)
	@$(RM)	$(OBJS)
	@$(RM)	$(OBJCB)
	@$(RM)	$(OBJSB)
	@echo "\n\033[31mDeleting (almost) EVERYTHING! ⌐(ಠ۾ಠ)¬\n"

fclean: clean
	@make clean -C ft_printf
	@make clean -C Libft
	@$(RM)	$(NAMEC)
	@$(RM)	$(NAMES)
	@$(RM)	$(NAMECB)
	@$(RM)	$(NAMESB)
	@$(RM)	ft_printf/$(PRINTF)
	@$(RM)	Libft/$(LIBFT)
	@echo "\n\033[31mDeleting EVERYTHING! ⌐(ಠ۾ಠ)¬\n"

re:	fclean	all

bonus: $(NAMECB) $(NAMESB)

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

.PHONY: all clean fclean re party
