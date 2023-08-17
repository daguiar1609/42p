NAME = test
SRC_PATH = src/
SRC_FILES = test.c window.c
SRC = $(addprefix $(SRC_PATH), $(SRC_FILES))
OBJ = $(SRC:.c=.o)

CC = cc
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra
INCLUDE = -I include
MLX = -Imlx_linux

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDE) $(MLX) -O3 -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ) -Lmlx_linux -lmlx_Linux -L/usr/lib $(MLX) -lXext -lX11 -lm -lz -o $(NAME)