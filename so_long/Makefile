SRCS	= ${wildcard map_check.c} ${wildcard ft_printf/*.c} ${wildcard get_next_line/get_next_line.c} ${wildcard get_next_line/get_next_line_utils.c}

NAME = so_long

OBJS =${SRCS:.c=.o}
CC = cc
CFLAGS = -g

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} ${CFLAGS} ${OBJS} -o ${NAME}

clean: 
	@rm -rf ${OBJS}
fclean: clean
	@rm -rf ${NAME}

fclean_all: fclean

re:fclean ${NAME}