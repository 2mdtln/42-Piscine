SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRCS_DIR = ./srcs/
SRCS = $(addprefix $(SRCS_DIR), $(SRC))
OBJS = ${SRCS:.c=.o}

HEADER_DIR = ./includes/
CC = cc
CFLAGS = -Wall -Wextra -Werror
OUTPUT = libft.a

.c.o:
	${CC} ${CFLAGS} -I ${HEADER_DIR} -c $< -o $@

all: ${OUTPUT}

${OUTPUT}: ${OBJS}
	ar rc ${OUTPUT} ${OBJS}
	ranlib ${OUTPUT}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${OUTPUT}

re: fclean all

.PHONY: all clean fclean re
