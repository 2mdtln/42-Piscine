SRC = main.c ft_check_map.c ft_copy.c \
		ft_free.c ft_get_map.c init.c ft_load_file.c ft_manage_file.c \
		ft_matrix_size.c ft_put_len.c ft_solver.c ft_square_utils.c \
		ft_split.c ft_strdup.c

SRCS_DIR = ./src/

SRCS = $(addprefix $(SRCS_DIR), $(SRC))

SRCS_OBJ = ${SRCS:.c=.o}

CC = cc

WFLAGS = -Wall -Wextra -Werror

NAME = bsq

.c.o:
	${CC} ${WFLAGS} -I ${SRCS_DIR} -c $< -o $@

${NAME} : ${SRCS_OBJ}
	${CC} ${WFLAGS} -o ${NAME} ${SRCS_OBJ}

all : ${NAME}

clean :
	rm -f ${SRCS_OBJ}

fclean : clean
	rm -f ${NAME}

re : fclean all

valgrind: $(NAME)
	valgrind --leak-check=full --show-leak-kinds=all ./$(NAME) $(args)

.PHONY : all clean fclean re valgrind
